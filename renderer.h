#ifndef RENDERER_H_INCLUDED
#define RENDERER_H_INCLUDED

struct Renderer {
  int lastFrameTime;
  float deltaTime;
  SDL_Renderer *self;
} renderer;

void renderer_init() {
  renderer.lastFrameTime = 0;
  renderer.deltaTime = 0.0f;
  renderer.self = SDL_CreateRenderer(window.self, -1, 0);
  SDL_GetRendererOutputSize(renderer.self, &window.width, &window.height);
  SDL_SetRenderDrawBlendMode(renderer.self, SDL_BLENDMODE_BLEND);
  window.cellSize = window.height / KOEFF_CELL_SIZE;
};

#endif
