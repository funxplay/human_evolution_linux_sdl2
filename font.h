#ifndef FONT_H_INCLUDED
#define FONT_H_INCLUDED

struct Font {
  TTF_Font *type;
  SDL_Color whiteColor;
  SDL_Color greenColor;
  SDL_Color redColor;
  SDL_Color blueColor;
} font;

void font_init() {
  font.type = TTF_OpenFont("font/cascadia-code/Cascadia.ttf", FONT_SIZE);
  font.whiteColor.r = 255;
  font.whiteColor.g = 255;
  font.whiteColor.b = 255;
  font.greenColor.r = 0;
  font.greenColor.g = 255;
  font.greenColor.b = 0;
  font.redColor.r = 255;
  font.redColor.g = 0;
  font.redColor.b = 0;
  font.blueColor.r = 0;
  font.blueColor.g = 0;
  font.blueColor.b = 255;
};

#endif