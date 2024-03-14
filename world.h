#ifndef WORLD_H_INCLUDED
#define WORLD_H_INCLUDED

struct World {
  struct Block blockMap[WORLD_MAP_ROWS_MAX * WORLD_MAP_COLS_MAX];
  int blockMapLen;

  float speedx;
  float speedy;
  int dx;
  int dy;
  SDL_bool xCollision;
  SDL_bool yCollision;
} world;

void world_init(float perlin_frequency, int perlin_depth, unsigned long int perlin_seed, int worldMapRows, int worldMapCols) {
  for(int row = 0; row < worldMapRows; row++) {
    for (int col = 0; col < worldMapCols; col++) {
      float perlinValue = perlin_2d(col, row, perlin_frequency, perlin_depth, perlin_seed);
      struct Block block;
      block.hover = SDL_FALSE;
      block.col = col;
      block.row = row;
      block.srcrect.x = 0;
      block.srcrect.y = 0;
      block.srcrect.w = window.cellSize;
      block.srcrect.h = window.cellSize;
      block.dstrect.x = col * window.cellSize;
      block.dstrect.y = row * window.cellSize;
      block.dstrect.w = window.cellSize;
      block.dstrect.h = window.cellSize;
      if (perlinValue <= 0.4) {
        block.texture = groundTexture;
        block.visible = SDL_TRUE;
      }else if (perlinValue >= 0.6) {
        block.texture = stoneTexture;
        block.visible = SDL_TRUE;
      } else {
        block.texture = groundTexture;
        block.visible = SDL_FALSE;
      };
      world.blockMap[world.blockMapLen] = block;
      world.blockMapLen++;
    };
  };
};

void world_update() {
  // hover update
  for (int i=0;i<world.blockMapLen;i++) {
    if (input.mouse_x > world.blockMap[i].dstrect.x && input.mouse_x < (world.blockMap[i].dstrect.x + world.blockMap[i].dstrect.w) && input.mouse_y > world.blockMap[i].dstrect.y && input.mouse_y < (world.blockMap[i].dstrect.y + world.blockMap[i].dstrect.h)) {
      world.blockMap[i].hover = SDL_TRUE;
    } else {
      world.blockMap[i].hover = SDL_FALSE;
    };
  };
  
  // vertical update
  if (world.speedy == 0.0 && input.key_w == SDL_TRUE) {
    world.speedy = SPEEDY;
  };
  
  world.speedy -= ACCELERATE * renderer.deltaTime;
  world.dy = world.speedy * renderer.deltaTime - 1;
  int abs_dy = abs(world.dy);
  
  if (abs_dy < player_dstrect.h) {
    world.yCollision = SDL_FALSE;
    for (int i=0;i<=world.blockMapLen - 1;i++) {
      if (world.blockMap[i].visible == SDL_TRUE) {
        if (world.speedy > 0.0) {
          SDL_Point topLeftPlayerPoint;
          topLeftPlayerPoint.x = player_dstrect.x;
          topLeftPlayerPoint.y = player_dstrect.y - abs_dy;
          SDL_Point topRightPlayerPoint;
          topRightPlayerPoint.x = player_dstrect.x + player_dstrect.w;
          topRightPlayerPoint.y = player_dstrect.y - abs_dy;
          SDL_bool isTopLeftPlayerPointInBlock = SDL_PointInRect(&topLeftPlayerPoint, &world.blockMap[i].dstrect);
          SDL_bool isTopRightPlayerPointInBlock = SDL_PointInRect(&topRightPlayerPoint, &world.blockMap[i].dstrect);

          if (isTopLeftPlayerPointInBlock == SDL_TRUE || isTopRightPlayerPointInBlock == SDL_TRUE) {
            world.speedy = -world.speedy;
            world.dy = world.speedy * renderer.deltaTime;
            break;
          };
        } else {
          SDL_Point bottomLeftPlayerPoint;
          bottomLeftPlayerPoint.x = player_dstrect.x;
          bottomLeftPlayerPoint.y = player_dstrect.y + player_dstrect.h + abs_dy;
          SDL_Point bottomRightPlayerPoint;
          bottomRightPlayerPoint.x = player_dstrect.x + player_dstrect.w;
          bottomRightPlayerPoint.y = player_dstrect.y + player_dstrect.h + abs_dy;
          SDL_bool isBottomLeftPlayerPointInBlock = SDL_PointInRect(&bottomLeftPlayerPoint, &world.blockMap[i].dstrect);
          SDL_bool isBottomRightPlayerPointInBlock = SDL_PointInRect(&bottomRightPlayerPoint, &world.blockMap[i].dstrect);

          if (isBottomLeftPlayerPointInBlock == SDL_TRUE || isBottomRightPlayerPointInBlock == SDL_TRUE) {
            world.speedy = 0.0;
            world.dy = 0;
            world.yCollision = SDL_TRUE;
            break;
          };
        };
      };
    };
    if (world.yCollision == SDL_FALSE) {
      for (int i=0;i<=world.blockMapLen - 1;i++) {
        world.blockMap[i].dstrect.y += world.dy;
      };
    };
  } else {
    world.speedy = 0.0;
  };
  
  // horizontal update
  if (input.key_d == SDL_TRUE && input.key_a == SDL_TRUE) {
    world.speedx = 0;
    return;
  };
  if (input.key_d == SDL_TRUE) {
    world.speedx = SPEEDX;
    world.dx = world.speedx * renderer.deltaTime;
    world.xCollision = SDL_FALSE;
    for (int i=0;i<=world.blockMapLen - 1;i++) {
      if (world.blockMap[i].visible == SDL_TRUE) {
        SDL_Point topRightPlayerPoint;
        topRightPlayerPoint.x = player_dstrect.x + player_dstrect.w + world.dx;
        topRightPlayerPoint.y = player_dstrect.y;
        SDL_Point bottomRightPlayerPoint;
        bottomRightPlayerPoint.x = player_dstrect.x + player_dstrect.w + world.dx;
        bottomRightPlayerPoint.y = player_dstrect.y + player_dstrect.h;
        SDL_bool isTopRightPlayerPointInBlock = SDL_PointInRect(&topRightPlayerPoint, &world.blockMap[i].dstrect);
        SDL_bool isBottomRightPlayerPointInBlock = SDL_PointInRect(&bottomRightPlayerPoint, &world.blockMap[i].dstrect);
        if (isTopRightPlayerPointInBlock == SDL_TRUE || isBottomRightPlayerPointInBlock == SDL_TRUE) {
          world.xCollision = SDL_TRUE;
          world.speedx = 0.0;
          break;
        };
      };
    };
    if (world.xCollision == SDL_FALSE) {
      for (int i=0;i<=world.blockMapLen - 1;i++) {
        world.blockMap[i].dstrect.x -= world.dx;
      };
    };
  };
  if (input.key_a == SDL_TRUE) {
    world.speedx = -SPEEDX;
    world.dx = world.speedx * renderer.deltaTime;
    world.xCollision = SDL_FALSE;
    for (int i=0;i<=world.blockMapLen - 1;i++) {
      if (world.blockMap[i].visible == SDL_TRUE) {
        SDL_Point topLeftPlayerPoint;
        topLeftPlayerPoint.x = player_dstrect.x + world.dx;
        topLeftPlayerPoint.y = player_dstrect.y;
        SDL_Point bottomLeftPlayerPoint;
        bottomLeftPlayerPoint.x = player_dstrect.x + world.dx;
        bottomLeftPlayerPoint.y = player_dstrect.y + player_dstrect.h;
        SDL_bool isTopLeftPlayerPointInBlock = SDL_PointInRect(&topLeftPlayerPoint, &world.blockMap[i].dstrect);
        SDL_bool isBottomLeftPlayerPointInBlock = SDL_PointInRect(&bottomLeftPlayerPoint, &world.blockMap[i].dstrect);
        if (isTopLeftPlayerPointInBlock == SDL_TRUE || isBottomLeftPlayerPointInBlock == SDL_TRUE) {
          world.xCollision = SDL_TRUE;
          world.speedx = 0.0;
          break;
        };
      };
    };
    if (world.xCollision == SDL_FALSE) {
      for (int i=0;i<=world.blockMapLen - 1;i++) {
        world.blockMap[i].dstrect.x -= world.dx;
      };
    };
  };
};

void world_draw() {
  for (int i=0;i<=world.blockMapLen - 1;i++) {
    if (world.blockMap[i].visible == SDL_TRUE) {
      SDL_RenderCopy(renderer.self, world.blockMap[i].texture, &world.blockMap[i].srcrect, &world.blockMap[i].dstrect);
    };
    if (world.blockMap[i].hover == SDL_TRUE) {
      SDL_SetRenderDrawColor(renderer.self, 255, 255, 255, 255);
      SDL_RenderDrawRect(renderer.self, &world.blockMap[i].dstrect);
    };
  };
};

#endif
