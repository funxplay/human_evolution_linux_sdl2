#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

struct Window {
  SDL_Window *self;
  int width;
  int height;
  int cellSize;
} window;

void window_init() {
  window.width = 1000;
  window.height = 600;
  window.cellSize = 0;
  
  window.self = SDL_CreateWindow(
    GAME_NAME,
    SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,
    window.width,
    window.height,
    SDL_WINDOW_FULLSCREEN_DESKTOP
  );
  
  //SDL_ShowCursor(SDL_DISABLE);
  SDL_EventState(SDL_DISPLAYEVENT, SDL_DISABLE);
  SDL_EventState(SDL_WINDOWEVENT, SDL_DISABLE);
  SDL_EventState(SDL_TEXTEDITING, SDL_DISABLE);
  SDL_EventState(SDL_TEXTINPUT, SDL_DISABLE);
  SDL_EventState(SDL_MOUSEMOTION, SDL_DISABLE);
  SDL_EventState(SDL_MOUSEBUTTONDOWN, SDL_ENABLE);
  SDL_EventState(SDL_MOUSEBUTTONUP, SDL_ENABLE);
  SDL_EventState(SDL_MOUSEWHEEL, SDL_ENABLE);
  SDL_EventState(SDL_JOYAXISMOTION, SDL_DISABLE);
  SDL_EventState(SDL_JOYBALLMOTION, SDL_DISABLE);
  SDL_EventState(SDL_JOYHATMOTION, SDL_DISABLE);
  SDL_EventState(SDL_JOYBUTTONDOWN, SDL_DISABLE);
  SDL_EventState(SDL_JOYBUTTONUP, SDL_DISABLE);
  SDL_EventState(SDL_JOYDEVICEADDED, SDL_DISABLE);
  SDL_EventState(SDL_JOYDEVICEREMOVED, SDL_DISABLE);
  SDL_EventState(SDL_CONTROLLERAXISMOTION, SDL_DISABLE);
  SDL_EventState(SDL_CONTROLLERBUTTONDOWN, SDL_DISABLE);
  SDL_EventState(SDL_CONTROLLERBUTTONUP, SDL_DISABLE);
  SDL_EventState(SDL_CONTROLLERDEVICEADDED, SDL_DISABLE);
  SDL_EventState(SDL_CONTROLLERDEVICEREMOVED, SDL_DISABLE);
  SDL_EventState(SDL_CONTROLLERDEVICEREMAPPED, SDL_DISABLE);
};

#endif
