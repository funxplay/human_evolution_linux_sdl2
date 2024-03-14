#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED

struct Block {
  SDL_Texture *texture;
  SDL_Rect srcrect;
  SDL_Rect dstrect;
  
  SDL_bool visible;
  SDL_bool hover;
  int col;
  int row;
};

SDL_Surface *groundImg;
SDL_Texture *groundTexture;

SDL_Surface *stoneImg;
SDL_Texture *stoneTexture;

void block_init() {
  groundImg = IMG_Load("img/block/ground.png");
  groundTexture = SDL_CreateTextureFromSurface(renderer.self, groundImg);

  stoneImg = IMG_Load("img/block/stone.png");
  stoneTexture = SDL_CreateTextureFromSurface(renderer.self, stoneImg);
};

#endif
