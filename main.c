#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

// const
#define GAME_NAME "Human"

#define BACKGROUND_COLOR_RGB_r 19
#define BACKGROUND_COLOR_RGB_g 101
#define BACKGROUND_COLOR_RGB_b 100
#define BACKGROUND_COLOR_RGB_a 255

#define MENU_COLOR_RGB_r 0
#define MENU_COLOR_RGB_g 0
#define MENU_COLOR_RGB_b 0
#define MENU_COLOR_RGB_a 150

#define PERLIN_FREQUENCY_MIN -175999.28
#define PERLIN_FREQUENCY_MAX 174999.99
#define PERLIN_FREQUENCY 0.33
#define PERLIN_DEPTH_MIN 1
#define PERLIN_DEPTH_MAX 85
#define PERLIN_DEPTH 4
//#define PERLIN_SEED_MIN -2147483648
#define PERLIN_SEED_MIN 0
#define PERLIN_SEED_MAX 4294967295
#define PERLIN_SEED 1
#define WORLD_MAP_ROWS_MIN 9
#define WORLD_MAP_ROWS_MAX 5792
#define WORLD_MAP_ROWS 30
#define WORLD_MAP_COLS_MIN 9
#define WORLD_MAP_COLS_MAX 5792
#define WORLD_MAP_COLS 30

#define FPS 60
#define FRAME_TARGET_TIME (1000/FPS)

#define SPEEDX 200.0
#define SPEEDY 500.0
#define ACCELERATE 700.0

#define KOEFF_PLAYER_RECT 0.6
#define KOEFF_CELL_SIZE 14

#define UPDATE_TIME 60

#define FONT_SIZE 24
#define MENU_LABEL_TEXT GAME_NAME
#define PERLIN_NOISE_FREQUENCY_TEXT "perlin noise frequency:"
#define PERLIN_NOISE_DEPTH_TEXT     "perlin noise depth    :"
#define PERLIN_NOISE_SEED_TEXT      "perlin noise seed     :"
#define WORLD_MAP_ROWS_TEXT         "world map rows        :"
#define WORLD_MAP_COLS_TEXT         "world map cols        :"
#define PERLIN_NOISE_MINUS                              " - "
#define PERLIN_NOISE_PLUS                               " + "
#define LOAD_WORLD_TEXT             "load world"
#define CREATE_WORLD_TEXT           "create world"
#define EXIT_BUTTON_TEXT            "quit"

// variables
SDL_bool gameIsRunning = SDL_TRUE;
SDL_bool menuVisible = SDL_TRUE;
SDL_bool worldInit = SDL_FALSE;
SDL_Rect player_srcrect;
SDL_Rect player_dstrect;

// classes
#include "perlin.h"
#include "window.h"
#include "renderer.h"
#include "font.h"
#include "input.h"
#include "block.h"
#include "world.h"
#include "menu.h"
#include "player.h"
#include "music.h"

int main(int argc, char* args[]) {
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0) {
    fprintf(stderr, "Error initializing SDL.\n");
    return 1;
  };

  if (TTF_Init() != 0) {
    fprintf(stderr, "Error initializing SDL_ttf.\n");
    return 2;
  };
  
  if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
    fprintf(stderr, "Error initializing SDL_image.\n");
    return 3;
  };
  
  if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
    printf("Error initializing SDL_mixer: %s\n", Mix_GetError());
    return 4;
  };

  music_init();
  if(music.background == NULL ) {
    printf("Failed to load background music! SDL_mixer Error: %s\n", Mix_GetError());
    return 5;
  };

  window_init();
  if (!window.self) {
    fprintf(stderr, "Error creating SDL Window.\n");
    return 6;
  };
  
  renderer_init();
  if (!renderer.self) {
    fprintf(stderr, "Error creating SDL Renderer.\n");
    return 7;
  };
  
  perlin_init();
  input_init();
  font_init();
  menu_init();
  block_init();
  //world_init(perlin.frequency, perlin.depth, perlin.seed);
  player_init();
  
  music_playBackground();
  
  while(gameIsRunning == SDL_TRUE) {
    input_update();
    
    int timeToWait = FRAME_TARGET_TIME - (SDL_GetTicks() - renderer.lastFrameTime);
    if (timeToWait > 0.0 && timeToWait <= FRAME_TARGET_TIME) {
      SDL_Delay(timeToWait);
    };
    renderer.deltaTime = (SDL_GetTicks() - renderer.lastFrameTime) / 1000.0f;
    renderer.lastFrameTime = SDL_GetTicks();

    if (menuVisible != SDL_TRUE) {
      world_update();
      player_update();
    } else {
      menu_update();
    };
    
    SDL_SetRenderDrawColor(renderer.self, BACKGROUND_COLOR_RGB_r, BACKGROUND_COLOR_RGB_g, BACKGROUND_COLOR_RGB_b, BACKGROUND_COLOR_RGB_a);
    SDL_RenderClear(renderer.self);
  
    world_draw();
    player_draw();
    menu_draw();

    SDL_RenderPresent(renderer.self);
  };

  for (int i = 0; i < (*(&player.imgList + 1) - player.imgList); i++) {
    SDL_FreeSurface(player.imgList[i]);
    SDL_DestroyTexture(player.textureList[i]);
  };
  SDL_DestroyTexture(player.texture);
  SDL_FreeSurface(groundImg);
  SDL_DestroyTexture(groundTexture);
  SDL_FreeSurface(stoneImg);
  SDL_DestroyTexture(stoneTexture);

  SDL_FreeSurface(menu.labelTextSurface);
  SDL_DestroyTexture(menu.labelTextTexture);
  SDL_FreeSurface(menu.createWorldTextSurface);
  SDL_DestroyTexture(menu.createWorldTextTexture);
  SDL_FreeSurface(menu.exitButtonSurface);
  SDL_DestroyTexture(menu.exitButtonTexture);

  SDL_DestroyRenderer(renderer.self);
  SDL_DestroyWindow(window.self);
  SDL_Quit();
  IMG_Quit();
  Mix_FreeMusic(music.background);
  Mix_Quit();

  return 0;
};
