#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

struct Player {
  SDL_Surface *img;
  SDL_Surface *imgList [16];
  SDL_Texture *texture;
  SDL_Texture *textureList [16];
  
  int lastImgUpdateTime;
  
  char state;
  /* 0 - static right
   * 1 - static left
   * 2 - go right
   * 3 - go left
   * 4 - jump right
   * 5 - jump left
   * 6 - fight right
   * 7 - fight left
   * */
} player;

void player_init() {
  player.imgList[0]  = IMG_Load("img/player/static_right_0.png");
  player.imgList[1]  = IMG_Load("img/player/static_right_1.png");
  player.imgList[2]  = IMG_Load("img/player/static_left_0.png");
  player.imgList[3]  = IMG_Load("img/player/static_left_1.png");
  player.imgList[4]  = IMG_Load("img/player/go_right_0.png");
  player.imgList[5]  = IMG_Load("img/player/go_right_1.png");
  player.imgList[6]  = IMG_Load("img/player/go_left_0.png");
  player.imgList[7]  = IMG_Load("img/player/go_left_1.png");
  player.imgList[8]  = IMG_Load("img/player/jump_right_0.png");
  player.imgList[9]  = IMG_Load("img/player/jump_left_0.png");
  player.imgList[10] = IMG_Load("img/player/fight_right_0.png");
  player.imgList[11] = IMG_Load("img/player/fight_right_1.png");
  player.imgList[12] = IMG_Load("img/player/fight_right_2.png");
  player.imgList[13] = IMG_Load("img/player/fight_left_0.png");
  player.imgList[14] = IMG_Load("img/player/fight_left_1.png");
  player.imgList[15] = IMG_Load("img/player/fight_left_2.png");
  
  for (int i = 0; i < (*(&player.imgList + 1) - player.imgList); i++) {
    player.textureList[i] = SDL_CreateTextureFromSurface(renderer.self, player.imgList[i]);
  };
  
  player_srcrect.x = 0;
  player_srcrect.y = 0;
  player_srcrect.w = window.cellSize;
  player_srcrect.h = window.cellSize;
  player_dstrect.x = window.width/2 - window.cellSize/2;
  player_dstrect.y = window.height/2 - window.cellSize/2;
  player_dstrect.w = window.cellSize * KOEFF_PLAYER_RECT;
  player_dstrect.h = window.cellSize * KOEFF_PLAYER_RECT;
  
  // init jump right
  player.state = 4;
  player.img = player.imgList[8];
  player.texture = player.textureList[8];
};

void player_update() {
  int nowTime = SDL_GetTicks();
  if (nowTime > (player.lastImgUpdateTime + UPDATE_TIME)) {
    player.lastImgUpdateTime = nowTime;
    if (input.key_mouse_left == SDL_TRUE || input.key_mouse_right == SDL_TRUE) { // fight
      if (input.key_mouse_left == SDL_TRUE) {
        for (int i=0;i<=world.blockMapLen - 1;i++) {
          if (world.blockMap[i].hover == SDL_TRUE) {
            world.blockMap[i].visible = SDL_FALSE;
          };
        };
      };
      if (input.key_mouse_right == SDL_TRUE) {
        for (int i=0;i<=world.blockMapLen - 1;i++) {
          if (world.blockMap[i].hover == SDL_TRUE) {
            world.blockMap[i].visible = SDL_TRUE;
          };
        };
      };
      if (player.state == 0 || player.state == 2 || player.state == 4) { // right orient before
        player.state = 6;
        player.img = player.imgList[10];
        player.texture = player.textureList[10];
        return;
      };
      if (player.state == 1 || player.state == 3 || player.state == 5) { // left orient before
        player.state = 7;
        player.img = player.imgList[13];
        player.texture = player.textureList[13];
        return;
      };
      if (player.state == 6 && player.img == player.imgList[10]) {
        player.img = player.imgList[11];
        player.texture = player.textureList[11];
        return;
      };
      if (player.state == 6 && player.img == player.imgList[11]) {
        player.img = player.imgList[12];
        player.texture = player.textureList[12];
        return;
      };
      if (player.state == 6 && player.img == player.imgList[12]) {
        player.img = player.imgList[10];
        player.texture = player.textureList[10];
        return;
      };
      /*if (player.state == 6 && input.key_a == SDL_TRUE) {
        player.state = 7;
        player.img = player.imgList[13];
        player.texture = player.textureList[13];
        return;
      };*/
      if (player.state == 7 && player.img == player.imgList[13]) {
        player.img = player.imgList[14];
        player.texture = player.textureList[14];
        return;
      };
      if (player.state == 7 && player.img == player.imgList[14]) {
        player.img = player.imgList[15];
        player.texture = player.textureList[15];
        return;
      };
      if (player.state == 7 && player.img == player.imgList[15]) {
        player.img = player.imgList[13];
        player.texture = player.textureList[13];
        return;
      };
      /*if (player.state == 7 && input.key_d == SDL_TRUE) {
        player.state = 6;
        player.img = player.imgList[10];
        player.texture = player.textureList[10];
        return;
      };*/
      return;
    } else { // dont fight
      if (world.speedy != 0.0) { // jump
        if (input.key_d == SDL_TRUE && input.key_a == SDL_FALSE) { // jump right
          player.state = 4;
          player.img = player.imgList[8];
          player.texture = player.textureList[8];
          return;
        };
        if (input.key_d == SDL_FALSE && input.key_a == SDL_TRUE) { // jump left
          player.state = 5;
          player.img = player.imgList[9];
          player.texture = player.textureList[9];
          return;
        };
        if (player.state == 0 || player.state == 2 || player.state == 6) { // right position before
          player.state = 4;
          player.img = player.imgList[8];
          player.texture = player.textureList[8];
          return;
        };
        if (player.state == 1 || player.state == 3 || player.state == 7) { // left position before
          player.state = 5;
          player.img = player.imgList[9];
          player.texture = player.textureList[9];
          return;
        };
        return;
      };
      if (world.speedy == 0.0) { // dont jump
        // go
        if (input.key_d == SDL_TRUE && input.key_a == SDL_FALSE) { // go right
          if (player.state != 2) { // no go right before 
            player.state = 2;
            player.img = player.imgList[4];
            player.texture = player.textureList[4];
            return;
          };
          if (player.state == 2 && player.img == player.imgList[4]) { // go right 0 position before
            player.img = player.imgList[5];
            player.texture = player.textureList[5];
            return;
          };
          if (player.state == 2 && player.img == player.imgList[5]) { // go right 1 position before
            player.img = player.imgList[4];
            player.texture = player.textureList[4];
            return;
          };
        };
        if (input.key_d == SDL_FALSE && input.key_a == SDL_TRUE) { // go left
          if (player.state != 3) { // no go left before 
            player.state = 3;
            player.img = player.imgList[6];
            player.texture = player.textureList[6];
            return;
          };
          if (player.state == 3 && player.img == player.imgList[6]) { // go left 0 position before
            player.img = player.imgList[7];
            player.texture = player.textureList[7];
            return;
          };
          if (player.state == 3 && player.img == player.imgList[7]) { // go left 1 position before
            player.img = player.imgList[6];
            player.texture = player.textureList[6];
            return;
          };
        };
        // static
        if (player.state == 2 || player.state == 4 || player.state == 6) { // right position before
          player.state = 0;
          player.img = player.imgList[0];
          player.texture = player.textureList[0];
          return;
        };
        if (player.state == 3 || player.state == 5 || player.state == 7) { // left position before
          player.state = 1;
          player.img = player.imgList[2];
          player.texture = player.textureList[2];
          return;
        };
        if (player.state == 0 && player.img == player.imgList[0]) { // static right 0 position before
          player.img = player.imgList[1];
          player.texture = player.textureList[1];
          return;
        };
        if (player.state == 0 && player.img == player.imgList[1]) { // static right 1 position before
          player.img = player.imgList[0];
          player.texture = player.textureList[0];
          return;
        };
        if (player.state == 1 && player.img == player.imgList[2]) { // static left 0 position before
          player.img = player.imgList[3];
          player.texture = player.textureList[3];
          return;
        };
        if (player.state == 1 && player.img == player.imgList[3]) { // static left 1 position before
          player.img = player.imgList[2];
          player.texture = player.textureList[2];
          return;
        };
        return;
      };
      return;
    };
  };
};

void player_draw() {
  SDL_RenderCopy(renderer.self, player.texture, &player_srcrect, &player_dstrect);
};

#endif
