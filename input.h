#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED

struct Input {
  SDL_bool key_w;
  SDL_bool key_a;
  SDL_bool key_d;
  SDL_bool key_mouse_left;
  SDL_bool key_mouse_right;
  int mouse_x;
  int mouse_y;
  SDL_Event event;
} input;

void input_init() {
  input.key_w = SDL_FALSE;
  input.key_a = SDL_FALSE;
  input.key_d = SDL_FALSE;
  input.key_mouse_left = SDL_FALSE;
  input.key_mouse_right = SDL_FALSE;
  SDL_GetMouseState(&input.mouse_x, &input.mouse_y);
};

void input_update() {
  SDL_GetMouseState(&input.mouse_x, &input.mouse_y);
  while(SDL_PollEvent(&input.event)) {
    switch(input.event.type) {
      case SDL_QUIT:
        gameIsRunning = SDL_FALSE;
        break;
      case SDL_KEYDOWN:
        switch(input.event.key.keysym.sym) {
          case SDLK_ESCAPE:
            break;
          case SDLK_w:
            input.key_w = SDL_TRUE;
            break;
          case SDLK_a:
            input.key_a = SDL_TRUE;
            break;
          case SDLK_d:
            input.key_d = SDL_TRUE;
            break;
        };
        break;
      case SDL_KEYUP:
        switch (input.event.key.keysym.sym) {
          case SDLK_ESCAPE:
            if (worldInit == SDL_TRUE) {
              if (menuVisible == SDL_FALSE) {
                menuVisible = SDL_TRUE;
              } else {
                menuVisible = SDL_FALSE;
              };
            };
            break;
          case SDLK_w:
            input.key_w = SDL_FALSE;
            break;
          case SDLK_a:
            input.key_a = SDL_FALSE;
            break;
          case SDLK_d:
            input.key_d = SDL_FALSE;
            break;
        };
        break;
      case SDL_MOUSEBUTTONDOWN:
        switch (input.event.button.button) {
          case 1:
            input.key_mouse_left = SDL_TRUE;
            break;
          case 3:
            input.key_mouse_right = SDL_TRUE;
            break;
        };
        break;
      case SDL_MOUSEBUTTONUP:
        switch (input.event.button.button) {
          case 1:
            input.key_mouse_left = SDL_FALSE;
            break;
          case 3:
            input.key_mouse_right = SDL_FALSE;
            break;
        };
        break;
    };
  };
};

#endif
