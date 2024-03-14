#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

struct Menu {
  SDL_Rect windowRect;
  SDL_Rect dstrect;

  int labelTextWidth;
  int labelTextHeight;
  SDL_Surface *labelTextSurface;
  SDL_Texture *labelTextTexture;
  SDL_Rect labelTextRect;

  int perlinNoiseFrequencyTextWidth;
  int perlinNoiseFrequencyTextHeight;
  SDL_Surface *perlinNoiseFrequencyTextSurface;
  SDL_Texture *perlinNoiseFrequencyTextTexture;
  SDL_Rect perlinNoiseFrequencyTextRect;
  int perlinNoiseFrequencyMinusWidth;
  int perlinNoiseFrequencyMinusHeight;
  SDL_Surface *perlinNoiseFrequencyMinusSurface;
  SDL_Texture *perlinNoiseFrequencyMinusTexture;
  SDL_Rect perlinNoiseFrequencyMinusRect;
  int perlinNoiseFrequencyValueWidth;
  int perlinNoiseFrequencyValueHeight;
  SDL_Surface *perlinNoiseFrequencyValueSurface;
  SDL_Texture *perlinNoiseFrequencyValueTexture;
  SDL_Rect perlinNoiseFrequencyValueRect;
  int perlinNoiseFrequencyPlusWidth;
  int perlinNoiseFrequencyPlusHeight;
  SDL_Surface *perlinNoiseFrequencyPlusSurface;
  SDL_Texture *perlinNoiseFrequencyPlusTexture;
  SDL_Rect perlinNoiseFrequencyPlusRect;

  int perlinNoiseDepthTextWidth;
  int perlinNoiseDepthTextHeight;
  SDL_Surface *perlinNoiseDepthTextSurface;
  SDL_Texture *perlinNoiseDepthTextTexture;
  SDL_Rect perlinNoiseDepthTextRect;
  int perlinNoiseDepthMinusWidth;
  int perlinNoiseDepthMinusHeight;
  SDL_Surface *perlinNoiseDepthMinusSurface;
  SDL_Texture *perlinNoiseDepthMinusTexture;
  SDL_Rect perlinNoiseDepthMinusRect;
  int perlinNoiseDepthValueWidth;
  int perlinNoiseDepthValueHeight;
  SDL_Surface *perlinNoiseDepthValueSurface;
  SDL_Texture *perlinNoiseDepthValueTexture;
  SDL_Rect perlinNoiseDepthValueRect;
  int perlinNoiseDepthPlusWidth;
  int perlinNoiseDepthPlusHeight;
  SDL_Surface *perlinNoiseDepthPlusSurface;
  SDL_Texture *perlinNoiseDepthPlusTexture;
  SDL_Rect perlinNoiseDepthPlusRect;

  int perlinNoiseSeedTextWidth;
  int perlinNoiseSeedTextHeight;
  SDL_Surface *perlinNoiseSeedTextSurface;
  SDL_Texture *perlinNoiseSeedTextTexture;
  SDL_Rect perlinNoiseSeedTextRect;
  int perlinNoiseSeedMinusWidth;
  int perlinNoiseSeedMinusHeight;
  SDL_Surface *perlinNoiseSeedMinusSurface;
  SDL_Texture *perlinNoiseSeedMinusTexture;
  SDL_Rect perlinNoiseSeedMinusRect;
  int perlinNoiseSeedValueWidth;
  int perlinNoiseSeedValueHeight;
  SDL_Surface *perlinNoiseSeedValueSurface;
  SDL_Texture *perlinNoiseSeedValueTexture;
  SDL_Rect perlinNoiseSeedValueRect;
  int perlinNoiseSeedPlusWidth;
  int perlinNoiseSeedPlusHeight;
  SDL_Surface *perlinNoiseSeedPlusSurface;
  SDL_Texture *perlinNoiseSeedPlusTexture;
  SDL_Rect perlinNoiseSeedPlusRect;

  int worldMapRowsTextWidth;
  int worldMapRowsTextHeight;
  SDL_Surface *worldMapRowsTextSurface;
  SDL_Texture *worldMapRowsTextTexture;
  SDL_Rect worldMapRowsTextRect;
  int perlinNoiseWorldMapRowsMinusWidth;
  int perlinNoiseWorldMapRowsMinusHeight;
  SDL_Surface *perlinNoiseWorldMapRowsMinusSurface;
  SDL_Texture *perlinNoiseWorldMapRowsMinusTexture;
  SDL_Rect perlinNoiseWorldMapRowsMinusRect;
  int perlinNoiseWorldMapRowsValueWidth;
  int perlinNoiseWorldMapRowsValueHeight;
  SDL_Surface *perlinNoiseWorldMapRowsValueSurface;
  SDL_Texture *perlinNoiseWorldMapRowsValueTexture;
  SDL_Rect perlinNoiseWorldMapRowsValueRect;
  int perlinNoiseWorldMapRowsPlusWidth;
  int perlinNoiseWorldMapRowsPlusHeight;
  SDL_Surface *perlinNoiseWorldMapRowsPlusSurface;
  SDL_Texture *perlinNoiseWorldMapRowsPlusTexture;
  SDL_Rect perlinNoiseWorldMapRowsPlusRect;

  int worldMapColsTextWidth;
  int worldMapColsTextHeight;
  SDL_Surface *worldMapColsTextSurface;
  SDL_Texture *worldMapColsTextTexture;
  SDL_Rect worldMapColsTextRect;
  int perlinNoiseWorldMapColsMinusWidth;
  int perlinNoiseWorldMapColsMinusHeight;
  SDL_Surface *perlinNoiseWorldMapColsMinusSurface;
  SDL_Texture *perlinNoiseWorldMapColsMinusTexture;
  SDL_Rect perlinNoiseWorldMapColsMinusRect;
  int perlinNoiseWorldMapColsValueWidth;
  int perlinNoiseWorldMapColsValueHeight;
  SDL_Surface *perlinNoiseWorldMapColsValueSurface;
  SDL_Texture *perlinNoiseWorldMapColsValueTexture;
  SDL_Rect perlinNoiseWorldMapColsValueRect;
  int perlinNoiseWorldMapColsPlusWidth;
  int perlinNoiseWorldMapColsPlusHeight;
  SDL_Surface *perlinNoiseWorldMapColsPlusSurface;
  SDL_Texture *perlinNoiseWorldMapColsPlusTexture;
  SDL_Rect perlinNoiseWorldMapColsPlusRect;

  int createWorldTextWidth;
  int createWorldTextHeight;
  SDL_Surface *createWorldTextSurface;
  SDL_Texture *createWorldTextTexture;
  SDL_Rect createWorldTextRect;

  int loadWorldTextWidth;
  int loadWorldTextHeight;
  SDL_Surface *loadWorldTextSurface;
  SDL_Texture *loadWorldTextTexture;
  SDL_Rect loadWorldTextRect;

  int exitButtonWidth;
  int exitButtonHeight;
  SDL_Surface *exitButtonSurface;
  SDL_Texture *exitButtonTexture;
  SDL_Rect exitButtonRect;

  int topDividerX1;
  int topDividerY1;
  int topDividerX2;
  int topDividerY2;

  int centerLeftDividerX1;
  int centerLeftDividerY1;
  int centerLeftDividerX2;
  int centerLeftDividerY2;

  int centerRightDividerX1;
  int centerRightDividerY1;
  int centerRightDividerX2;
  int centerRightDividerY2;

  int bottomDividerX1;
  int bottomDividerY1;
  int bottomDividerX2;
  int bottomDividerY2;
} menu;

void menu_init() {
  menu.windowRect.x = 0;
  menu.windowRect.y = 0;
  menu.windowRect.w = window.width;
  menu.windowRect.h = window.height;

  //menu label
  TTF_SizeText(font.type, MENU_LABEL_TEXT, &menu.labelTextWidth, &menu.labelTextHeight);
  menu.labelTextSurface = TTF_RenderText_Solid(font.type, MENU_LABEL_TEXT, font.whiteColor);
  menu.labelTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.labelTextSurface);
  menu.labelTextRect.x = window.width/2 - menu.labelTextWidth/2;
  menu.labelTextRect.y = menu.labelTextHeight;
  menu.labelTextRect.w = menu.labelTextWidth;
  menu.labelTextRect.h = menu.labelTextHeight;

  //perlin noise frequency
  TTF_SizeText(font.type, PERLIN_NOISE_FREQUENCY_TEXT, &menu.perlinNoiseFrequencyTextWidth, &menu.perlinNoiseFrequencyTextHeight);
  menu.perlinNoiseFrequencyTextSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_FREQUENCY_TEXT, font.whiteColor);
  menu.perlinNoiseFrequencyTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseFrequencyTextSurface);
  menu.perlinNoiseFrequencyTextRect.x = window.cellSize;
  menu.perlinNoiseFrequencyTextRect.y = 4*menu.labelTextHeight;
  menu.perlinNoiseFrequencyTextRect.w = menu.perlinNoiseFrequencyTextWidth;
  menu.perlinNoiseFrequencyTextRect.h = menu.perlinNoiseFrequencyTextHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_MINUS, &menu.perlinNoiseFrequencyMinusWidth, &menu.perlinNoiseFrequencyMinusHeight);
  menu.perlinNoiseFrequencyMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  menu.perlinNoiseFrequencyMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseFrequencyMinusSurface);
  menu.perlinNoiseFrequencyMinusRect.x = menu.perlinNoiseFrequencyTextRect.x + menu.perlinNoiseFrequencyTextRect.w;
  menu.perlinNoiseFrequencyMinusRect.y = menu.perlinNoiseFrequencyTextRect.y;
  menu.perlinNoiseFrequencyMinusRect.w = menu.perlinNoiseFrequencyMinusWidth;
  menu.perlinNoiseFrequencyMinusRect.h = menu.perlinNoiseFrequencyMinusHeight;
  perlin_frequencyFloatToString();
  TTF_SizeText(font.type, perlin.frequencyString, &menu.perlinNoiseFrequencyValueWidth, &menu.perlinNoiseFrequencyValueHeight);
  menu.perlinNoiseFrequencyValueSurface = TTF_RenderText_Solid(font.type, perlin.frequencyString, font.whiteColor);
  free(perlin.frequencyString);
  menu.perlinNoiseFrequencyValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseFrequencyValueSurface);
  menu.perlinNoiseFrequencyValueRect.x = menu.perlinNoiseFrequencyMinusRect.x + menu.perlinNoiseFrequencyMinusRect.w;
  menu.perlinNoiseFrequencyValueRect.y = menu.perlinNoiseFrequencyTextRect.y;
  menu.perlinNoiseFrequencyValueRect.w = menu.perlinNoiseFrequencyValueWidth;
  menu.perlinNoiseFrequencyValueRect.h = menu.perlinNoiseFrequencyValueHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_PLUS, &menu.perlinNoiseFrequencyPlusWidth, &menu.perlinNoiseFrequencyPlusHeight);
  menu.perlinNoiseFrequencyPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  menu.perlinNoiseFrequencyPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseFrequencyPlusSurface);
  menu.perlinNoiseFrequencyPlusRect.x = menu.perlinNoiseFrequencyValueRect.x + menu.perlinNoiseFrequencyValueRect.w;
  menu.perlinNoiseFrequencyPlusRect.y = menu.perlinNoiseFrequencyTextRect.y;
  menu.perlinNoiseFrequencyPlusRect.w = menu.perlinNoiseFrequencyPlusWidth;
  menu.perlinNoiseFrequencyPlusRect.h = menu.perlinNoiseFrequencyPlusHeight;

  //perlin noise depth
  TTF_SizeText(font.type, PERLIN_NOISE_DEPTH_TEXT, &menu.perlinNoiseDepthTextWidth, &menu.perlinNoiseDepthTextHeight);
  menu.perlinNoiseDepthTextSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_DEPTH_TEXT, font.whiteColor);
  menu.perlinNoiseDepthTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseDepthTextSurface);
  menu.perlinNoiseDepthTextRect.x = window.cellSize;
  menu.perlinNoiseDepthTextRect.y = 5*menu.labelTextHeight;
  menu.perlinNoiseDepthTextRect.w = menu.perlinNoiseDepthTextWidth;
  menu.perlinNoiseDepthTextRect.h = menu.perlinNoiseDepthTextHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_MINUS, &menu.perlinNoiseDepthMinusWidth, &menu.perlinNoiseDepthMinusHeight);
  menu.perlinNoiseDepthMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  menu.perlinNoiseDepthMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseDepthMinusSurface);
  menu.perlinNoiseDepthMinusRect.x = menu.perlinNoiseDepthTextRect.x + menu.perlinNoiseDepthTextRect.w;
  menu.perlinNoiseDepthMinusRect.y = menu.perlinNoiseDepthTextRect.y;
  menu.perlinNoiseDepthMinusRect.w = menu.perlinNoiseDepthMinusWidth;
  menu.perlinNoiseDepthMinusRect.h = menu.perlinNoiseDepthMinusHeight;
  perlin_depthIntToString();
  TTF_SizeText(font.type, perlin.depthString, &menu.perlinNoiseDepthValueWidth, &menu.perlinNoiseDepthValueHeight);
  menu.perlinNoiseDepthValueSurface = TTF_RenderText_Solid(font.type, perlin.depthString, font.whiteColor);
  free(perlin.depthString);
  menu.perlinNoiseDepthValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseDepthValueSurface);
  menu.perlinNoiseDepthValueRect.x = menu.perlinNoiseDepthMinusRect.x + menu.perlinNoiseDepthMinusRect.w;
  menu.perlinNoiseDepthValueRect.y = menu.perlinNoiseDepthTextRect.y;
  menu.perlinNoiseDepthValueRect.w = menu.perlinNoiseDepthValueWidth;
  menu.perlinNoiseDepthValueRect.h = menu.perlinNoiseDepthValueHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_PLUS, &menu.perlinNoiseDepthPlusWidth, &menu.perlinNoiseDepthPlusHeight);
  menu.perlinNoiseDepthPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  menu.perlinNoiseDepthPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseDepthPlusSurface);
  menu.perlinNoiseDepthPlusRect.x = menu.perlinNoiseDepthValueRect.x + menu.perlinNoiseDepthValueRect.w;
  menu.perlinNoiseDepthPlusRect.y = menu.perlinNoiseDepthTextRect.y;
  menu.perlinNoiseDepthPlusRect.w = menu.perlinNoiseDepthPlusWidth;
  menu.perlinNoiseDepthPlusRect.h = menu.perlinNoiseDepthPlusHeight;

  //perlin noise seed
  TTF_SizeText(font.type, PERLIN_NOISE_SEED_TEXT, &menu.perlinNoiseSeedTextWidth, &menu.perlinNoiseSeedTextHeight);
  menu.perlinNoiseSeedTextSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_SEED_TEXT, font.whiteColor);
  menu.perlinNoiseSeedTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseSeedTextSurface);
  menu.perlinNoiseSeedTextRect.x = window.cellSize;
  menu.perlinNoiseSeedTextRect.y = 6*menu.labelTextHeight;
  menu.perlinNoiseSeedTextRect.w = menu.perlinNoiseSeedTextWidth;
  menu.perlinNoiseSeedTextRect.h = menu.perlinNoiseSeedTextHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_MINUS, &menu.perlinNoiseSeedMinusWidth, &menu.perlinNoiseSeedMinusHeight);
  menu.perlinNoiseSeedMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  menu.perlinNoiseSeedMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseSeedMinusSurface);
  menu.perlinNoiseSeedMinusRect.x = menu.perlinNoiseSeedTextRect.x + menu.perlinNoiseSeedTextRect.w;
  menu.perlinNoiseSeedMinusRect.y = menu.perlinNoiseSeedTextRect.y;
  menu.perlinNoiseSeedMinusRect.w = menu.perlinNoiseSeedMinusWidth;
  menu.perlinNoiseSeedMinusRect.h = menu.perlinNoiseSeedMinusHeight;
  perlin_seedUnsignedLongIntToString();
  TTF_SizeText(font.type, perlin.seedString, &menu.perlinNoiseSeedValueWidth, &menu.perlinNoiseSeedValueHeight);
  menu.perlinNoiseSeedValueSurface = TTF_RenderText_Solid(font.type, perlin.seedString, font.whiteColor);
  free(perlin.seedString);
  menu.perlinNoiseSeedValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseSeedValueSurface);
  menu.perlinNoiseSeedValueRect.x = menu.perlinNoiseSeedMinusRect.x + menu.perlinNoiseSeedMinusRect.w;
  menu.perlinNoiseSeedValueRect.y = menu.perlinNoiseSeedTextRect.y;
  menu.perlinNoiseSeedValueRect.w = menu.perlinNoiseSeedValueWidth;
  menu.perlinNoiseSeedValueRect.h = menu.perlinNoiseSeedValueHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_PLUS, &menu.perlinNoiseSeedPlusWidth, &menu.perlinNoiseSeedPlusHeight);
  menu.perlinNoiseSeedPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  menu.perlinNoiseSeedPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseSeedPlusSurface);
  menu.perlinNoiseSeedPlusRect.x = menu.perlinNoiseSeedValueRect.x + menu.perlinNoiseSeedValueRect.w;
  menu.perlinNoiseSeedPlusRect.y = menu.perlinNoiseSeedTextRect.y;
  menu.perlinNoiseSeedPlusRect.w = menu.perlinNoiseSeedPlusWidth;
  menu.perlinNoiseSeedPlusRect.h = menu.perlinNoiseSeedPlusHeight;

  //world map rows
  TTF_SizeText(font.type, WORLD_MAP_ROWS_TEXT, &menu.worldMapRowsTextWidth, &menu.worldMapRowsTextHeight);
  menu.worldMapRowsTextSurface = TTF_RenderText_Solid(font.type, WORLD_MAP_ROWS_TEXT, font.whiteColor);
  menu.worldMapRowsTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.worldMapRowsTextSurface);
  menu.worldMapRowsTextRect.x = window.cellSize;
  menu.worldMapRowsTextRect.y = 7*menu.labelTextHeight;
  menu.worldMapRowsTextRect.w = menu.worldMapRowsTextWidth;
  menu.worldMapRowsTextRect.h = menu.worldMapRowsTextHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_MINUS, &menu.perlinNoiseWorldMapRowsMinusWidth, &menu.perlinNoiseWorldMapRowsMinusHeight);
  menu.perlinNoiseWorldMapRowsMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  menu.perlinNoiseWorldMapRowsMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapRowsMinusSurface);
  menu.perlinNoiseWorldMapRowsMinusRect.x = menu.worldMapRowsTextRect.x + menu.worldMapRowsTextRect.w;
  menu.perlinNoiseWorldMapRowsMinusRect.y = menu.worldMapRowsTextRect.y;
  menu.perlinNoiseWorldMapRowsMinusRect.w = menu.perlinNoiseWorldMapRowsMinusWidth;
  menu.perlinNoiseWorldMapRowsMinusRect.h = menu.perlinNoiseWorldMapRowsMinusHeight;
  perlin_worldMapRowsIntToString();
  TTF_SizeText(font.type, perlin.worldMapRowsString, &menu.perlinNoiseWorldMapRowsValueWidth, &menu.perlinNoiseWorldMapRowsValueHeight);
  menu.perlinNoiseWorldMapRowsValueSurface = TTF_RenderText_Solid(font.type, perlin.worldMapRowsString, font.whiteColor);
  free(perlin.worldMapRowsString);
  menu.perlinNoiseWorldMapRowsValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapRowsValueSurface);
  menu.perlinNoiseWorldMapRowsValueRect.x = menu.perlinNoiseWorldMapRowsMinusRect.x + menu.perlinNoiseWorldMapRowsMinusRect.w;
  menu.perlinNoiseWorldMapRowsValueRect.y = menu.worldMapRowsTextRect.y;
  menu.perlinNoiseWorldMapRowsValueRect.w = menu.perlinNoiseWorldMapRowsValueWidth;
  menu.perlinNoiseWorldMapRowsValueRect.h = menu.perlinNoiseWorldMapRowsValueHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_PLUS, &menu.perlinNoiseWorldMapRowsPlusWidth, &menu.perlinNoiseWorldMapRowsPlusHeight);
  menu.perlinNoiseWorldMapRowsPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  menu.perlinNoiseWorldMapRowsPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapRowsPlusSurface);
  menu.perlinNoiseWorldMapRowsPlusRect.x = menu.perlinNoiseWorldMapRowsValueRect.x + menu.perlinNoiseWorldMapRowsValueRect.w;
  menu.perlinNoiseWorldMapRowsPlusRect.y = menu.worldMapRowsTextRect.y;
  menu.perlinNoiseWorldMapRowsPlusRect.w = menu.perlinNoiseWorldMapRowsPlusWidth;
  menu.perlinNoiseWorldMapRowsPlusRect.h = menu.perlinNoiseWorldMapRowsPlusHeight;

  //world map cols
  TTF_SizeText(font.type, WORLD_MAP_COLS_TEXT, &menu.worldMapColsTextWidth, &menu.worldMapColsTextHeight);
  menu.worldMapColsTextSurface = TTF_RenderText_Solid(font.type, WORLD_MAP_COLS_TEXT, font.whiteColor);
  menu.worldMapColsTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.worldMapColsTextSurface);
  menu.worldMapColsTextRect.x = window.cellSize;
  menu.worldMapColsTextRect.y = 8*menu.labelTextHeight;
  menu.worldMapColsTextRect.w = menu.worldMapColsTextWidth;
  menu.worldMapColsTextRect.h = menu.worldMapColsTextHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_MINUS, &menu.perlinNoiseWorldMapColsMinusWidth, &menu.perlinNoiseWorldMapColsMinusHeight);
  menu.perlinNoiseWorldMapColsMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  menu.perlinNoiseWorldMapColsMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapColsMinusSurface);
  menu.perlinNoiseWorldMapColsMinusRect.x = menu.worldMapColsTextRect.x + menu.worldMapColsTextRect.w;
  menu.perlinNoiseWorldMapColsMinusRect.y = menu.worldMapColsTextRect.y;
  menu.perlinNoiseWorldMapColsMinusRect.w = menu.perlinNoiseWorldMapColsMinusWidth;
  menu.perlinNoiseWorldMapColsMinusRect.h = menu.perlinNoiseWorldMapColsMinusHeight;
  perlin_worldMapColsIntToString();
  TTF_SizeText(font.type, perlin.worldMapColsString, &menu.perlinNoiseWorldMapColsValueWidth, &menu.perlinNoiseWorldMapColsValueHeight);
  menu.perlinNoiseWorldMapColsValueSurface = TTF_RenderText_Solid(font.type, perlin.worldMapColsString, font.whiteColor);
  free(perlin.worldMapColsString);
  menu.perlinNoiseWorldMapColsValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapColsValueSurface);
  menu.perlinNoiseWorldMapColsValueRect.x = menu.perlinNoiseWorldMapColsMinusRect.x + menu.perlinNoiseWorldMapColsMinusRect.w;
  menu.perlinNoiseWorldMapColsValueRect.y = menu.worldMapColsTextRect.y;
  menu.perlinNoiseWorldMapColsValueRect.w = menu.perlinNoiseWorldMapColsValueWidth;
  menu.perlinNoiseWorldMapColsValueRect.h = menu.perlinNoiseWorldMapColsValueHeight;
  TTF_SizeText(font.type, PERLIN_NOISE_PLUS, &menu.perlinNoiseWorldMapColsPlusWidth, &menu.perlinNoiseWorldMapColsPlusHeight);
  menu.perlinNoiseWorldMapColsPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  menu.perlinNoiseWorldMapColsPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapColsPlusSurface);
  menu.perlinNoiseWorldMapColsPlusRect.x = menu.perlinNoiseWorldMapColsValueRect.x + menu.perlinNoiseWorldMapColsValueRect.w;
  menu.perlinNoiseWorldMapColsPlusRect.y = menu.worldMapColsTextRect.y;
  menu.perlinNoiseWorldMapColsPlusRect.w = menu.perlinNoiseWorldMapColsPlusWidth;
  menu.perlinNoiseWorldMapColsPlusRect.h = menu.perlinNoiseWorldMapColsPlusHeight;
  
  //createWorld button
  TTF_SizeText(font.type, CREATE_WORLD_TEXT, &menu.createWorldTextWidth, &menu.createWorldTextHeight);
  menu.createWorldTextSurface = TTF_RenderText_Solid(font.type, CREATE_WORLD_TEXT, font.whiteColor);
  menu.createWorldTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.createWorldTextSurface);
  menu.createWorldTextRect.x = window.width - menu.createWorldTextWidth - window.cellSize;
  menu.createWorldTextRect.y = window.height/2 - 2*menu.createWorldTextHeight;
  menu.createWorldTextRect.w = menu.createWorldTextWidth;
  menu.createWorldTextRect.h = menu.createWorldTextHeight;

  //loadWorld button
  TTF_SizeText(font.type, LOAD_WORLD_TEXT, &menu.loadWorldTextWidth, &menu.loadWorldTextHeight);
  menu.loadWorldTextSurface = TTF_RenderText_Solid(font.type, LOAD_WORLD_TEXT, font.whiteColor);
  menu.loadWorldTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.loadWorldTextSurface);
  menu.loadWorldTextRect.x = window.width - menu.loadWorldTextWidth - window.cellSize;
  menu.loadWorldTextRect.y = window.height - 5*menu.loadWorldTextHeight;
  menu.loadWorldTextRect.w = menu.loadWorldTextWidth;
  menu.loadWorldTextRect.h = menu.loadWorldTextHeight;

  //exit button
  TTF_SizeText(font.type, EXIT_BUTTON_TEXT, &menu.exitButtonWidth, &menu.exitButtonHeight);
  menu.exitButtonSurface = TTF_RenderText_Solid(font.type, EXIT_BUTTON_TEXT, font.whiteColor);
  menu.exitButtonTexture = SDL_CreateTextureFromSurface(renderer.self, menu.exitButtonSurface);
  menu.exitButtonRect.x = window.width - menu.exitButtonWidth - window.cellSize;
  menu.exitButtonRect.y = window.height - 2*menu.exitButtonHeight;
  menu.exitButtonRect.w = menu.exitButtonWidth;
  menu.exitButtonRect.h = menu.exitButtonHeight;

  //divider
  menu.topDividerX1 = window.cellSize;
  menu.topDividerY1 = 3*menu.labelTextRect.y;
  menu.topDividerX2 = window.width - window.cellSize;
  menu.topDividerY2 = menu.topDividerY1;

  menu.centerLeftDividerX1 = menu.topDividerX1;
  menu.centerLeftDividerY1 = window.height/2;
  menu.centerLeftDividerX2 = window.width/2 - window.cellSize;
  menu.centerLeftDividerY2 = menu.centerLeftDividerY1;

  menu.centerRightDividerX1 = window.width/2 + window.cellSize;
  menu.centerRightDividerY1 = menu.centerLeftDividerY1;
  menu.centerRightDividerX2 = menu.topDividerX2;
  menu.centerRightDividerY2 = menu.centerLeftDividerY1;

  menu.bottomDividerX1 = menu.topDividerX1;
  menu.bottomDividerY1 = window.height - 3*menu.labelTextRect.y;
  menu.bottomDividerX2 = menu.topDividerX2;
  menu.bottomDividerY2 = menu.bottomDividerY1;
};

void menu_update() {
  //perlinFrequency minus button hover update
  SDL_FreeSurface(menu.perlinNoiseFrequencyMinusSurface);
  SDL_DestroyTexture(menu.perlinNoiseFrequencyMinusTexture);
  if (input.mouse_x > menu.perlinNoiseFrequencyMinusRect.x && input.mouse_x < (menu.perlinNoiseFrequencyMinusRect.x + menu.perlinNoiseFrequencyMinusRect.w) && input.mouse_y > menu.perlinNoiseFrequencyMinusRect.y && input.mouse_y < (menu.perlinNoiseFrequencyMinusRect.y + menu.perlinNoiseFrequencyMinusRect.h)) {
    menu.perlinNoiseFrequencyMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.blueColor);
    //input key mouse left update
    if (perlin.frequency > PERLIN_FREQUENCY_MIN && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.frequency -= 0.01;
      perlin_frequencyFloatToString();
      TTF_SizeText(font.type, perlin.frequencyString, &menu.perlinNoiseFrequencyValueWidth, &menu.perlinNoiseFrequencyValueHeight);
      menu.perlinNoiseFrequencyValueSurface = TTF_RenderText_Solid(font.type, perlin.frequencyString, font.whiteColor);
      free(perlin.frequencyString);
      menu.perlinNoiseFrequencyValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseFrequencyValueSurface);
      menu.perlinNoiseFrequencyValueRect.w = menu.perlinNoiseFrequencyValueWidth;
      menu.perlinNoiseFrequencyPlusRect.x = menu.perlinNoiseFrequencyValueRect.x + menu.perlinNoiseFrequencyValueRect.w;
    };
  } else {
    menu.perlinNoiseFrequencyMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  };
  menu.perlinNoiseFrequencyMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseFrequencyMinusSurface);

  //perlinFrequency plus button hover update
  SDL_FreeSurface(menu.perlinNoiseFrequencyPlusSurface);
  SDL_DestroyTexture(menu.perlinNoiseFrequencyPlusTexture);
  if (input.mouse_x > menu.perlinNoiseFrequencyPlusRect.x && input.mouse_x < (menu.perlinNoiseFrequencyPlusRect.x + menu.perlinNoiseFrequencyPlusRect.w) && input.mouse_y > menu.perlinNoiseFrequencyPlusRect.y && input.mouse_y < (menu.perlinNoiseFrequencyPlusRect.y + menu.perlinNoiseFrequencyPlusRect.h)) {
    menu.perlinNoiseFrequencyPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.blueColor);
    //input key mouse left update
    if (perlin.frequency < PERLIN_FREQUENCY_MAX && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.frequency += 0.01;
      perlin_frequencyFloatToString();
      TTF_SizeText(font.type, perlin.frequencyString, &menu.perlinNoiseFrequencyValueWidth, &menu.perlinNoiseFrequencyValueHeight);
      menu.perlinNoiseFrequencyValueSurface = TTF_RenderText_Solid(font.type, perlin.frequencyString, font.whiteColor);
      free(perlin.frequencyString);
      menu.perlinNoiseFrequencyValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseFrequencyValueSurface);
      menu.perlinNoiseFrequencyValueRect.w = menu.perlinNoiseFrequencyValueWidth;
      menu.perlinNoiseFrequencyPlusRect.x = menu.perlinNoiseFrequencyValueRect.x + menu.perlinNoiseFrequencyValueRect.w;
    };
  } else {
    menu.perlinNoiseFrequencyPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  };
  menu.perlinNoiseFrequencyPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseFrequencyPlusSurface);

  //perlinDepth minus button hover update
  SDL_FreeSurface(menu.perlinNoiseDepthMinusSurface);
  SDL_DestroyTexture(menu.perlinNoiseDepthMinusTexture);
  if (input.mouse_x > menu.perlinNoiseDepthMinusRect.x && input.mouse_x < (menu.perlinNoiseDepthMinusRect.x + menu.perlinNoiseDepthMinusRect.w) && input.mouse_y > menu.perlinNoiseDepthMinusRect.y && input.mouse_y < (menu.perlinNoiseDepthMinusRect.y + menu.perlinNoiseDepthMinusRect.h)) {
    menu.perlinNoiseDepthMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.blueColor);
    //input key mouse left update
    if (perlin.depth > PERLIN_DEPTH_MIN && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.depth -= 1;
      perlin_depthIntToString();
      TTF_SizeText(font.type, perlin.depthString, &menu.perlinNoiseDepthValueWidth, &menu.perlinNoiseDepthValueHeight);
      menu.perlinNoiseDepthValueSurface = TTF_RenderText_Solid(font.type, perlin.depthString, font.whiteColor);
      free(perlin.depthString);
      menu.perlinNoiseDepthValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseDepthValueSurface);
      menu.perlinNoiseDepthValueRect.w = menu.perlinNoiseDepthValueWidth;
      menu.perlinNoiseDepthPlusRect.x = menu.perlinNoiseDepthValueRect.x + menu.perlinNoiseDepthValueRect.w;
    };
  } else {
    menu.perlinNoiseDepthMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  };
  menu.perlinNoiseDepthMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseDepthMinusSurface);

  //perlinDepth plus button hover update
  SDL_FreeSurface(menu.perlinNoiseDepthPlusSurface);
  SDL_DestroyTexture(menu.perlinNoiseDepthPlusTexture);
  if (input.mouse_x > menu.perlinNoiseDepthPlusRect.x && input.mouse_x < (menu.perlinNoiseDepthPlusRect.x + menu.perlinNoiseDepthPlusRect.w) && input.mouse_y > menu.perlinNoiseDepthPlusRect.y && input.mouse_y < (menu.perlinNoiseDepthPlusRect.y + menu.perlinNoiseDepthPlusRect.h)) {
    menu.perlinNoiseDepthPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.blueColor);
    //input key mouse left update
    if (perlin.depth < PERLIN_DEPTH_MAX && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.depth += 1;
      perlin_depthIntToString();
      TTF_SizeText(font.type, perlin.depthString, &menu.perlinNoiseDepthValueWidth, &menu.perlinNoiseDepthValueHeight);
      menu.perlinNoiseDepthValueSurface = TTF_RenderText_Solid(font.type, perlin.depthString, font.whiteColor);
      free(perlin.depthString);
      menu.perlinNoiseDepthValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseDepthValueSurface);
      menu.perlinNoiseDepthValueRect.w = menu.perlinNoiseDepthValueWidth;
      menu.perlinNoiseDepthPlusRect.x = menu.perlinNoiseDepthValueRect.x + menu.perlinNoiseDepthValueRect.w;
    };
  } else {
    menu.perlinNoiseDepthPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  };
  menu.perlinNoiseDepthPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseDepthPlusSurface);

  //perlinSeed minus button hover update
  SDL_FreeSurface(menu.perlinNoiseSeedMinusSurface);
  SDL_DestroyTexture(menu.perlinNoiseSeedMinusTexture);
  if (input.mouse_x > menu.perlinNoiseSeedMinusRect.x && input.mouse_x < (menu.perlinNoiseSeedMinusRect.x + menu.perlinNoiseSeedMinusRect.w) && input.mouse_y > menu.perlinNoiseSeedMinusRect.y && input.mouse_y < (menu.perlinNoiseSeedMinusRect.y + menu.perlinNoiseSeedMinusRect.h)) {
    menu.perlinNoiseSeedMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.blueColor);
    //input key mouse left update
    if (perlin.seed > PERLIN_SEED_MIN && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.seed -= 1;
      perlin_seedUnsignedLongIntToString();
      TTF_SizeText(font.type, perlin.seedString, &menu.perlinNoiseSeedValueWidth, &menu.perlinNoiseSeedValueHeight);
      menu.perlinNoiseSeedValueSurface = TTF_RenderText_Solid(font.type, perlin.seedString, font.whiteColor);
      free(perlin.seedString);
      menu.perlinNoiseSeedValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseSeedValueSurface);
      menu.perlinNoiseSeedValueRect.w = menu.perlinNoiseSeedValueWidth;
      menu.perlinNoiseSeedPlusRect.x = menu.perlinNoiseSeedValueRect.x + menu.perlinNoiseSeedValueRect.w;
    };
  } else {
    menu.perlinNoiseSeedMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  };
  menu.perlinNoiseSeedMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseSeedMinusSurface);

  //perlinSeed plus button hover update
  SDL_FreeSurface(menu.perlinNoiseSeedPlusSurface);
  SDL_DestroyTexture(menu.perlinNoiseSeedPlusTexture);
  if (input.mouse_x > menu.perlinNoiseSeedPlusRect.x && input.mouse_x < (menu.perlinNoiseSeedPlusRect.x + menu.perlinNoiseSeedPlusRect.w) && input.mouse_y > menu.perlinNoiseSeedPlusRect.y && input.mouse_y < (menu.perlinNoiseSeedPlusRect.y + menu.perlinNoiseSeedPlusRect.h)) {
    menu.perlinNoiseSeedPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.blueColor);
    //input key mouse left update
    if (perlin.seed < PERLIN_SEED_MAX && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.seed += 1;
      perlin_seedUnsignedLongIntToString();
      TTF_SizeText(font.type, perlin.seedString, &menu.perlinNoiseSeedValueWidth, &menu.perlinNoiseSeedValueHeight);
      menu.perlinNoiseSeedValueSurface = TTF_RenderText_Solid(font.type, perlin.seedString, font.whiteColor);
      free(perlin.seedString);
      menu.perlinNoiseSeedValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseSeedValueSurface);
      menu.perlinNoiseSeedValueRect.w = menu.perlinNoiseSeedValueWidth;
      menu.perlinNoiseSeedPlusRect.x = menu.perlinNoiseSeedValueRect.x + menu.perlinNoiseSeedValueRect.w;
    };
  } else {
    menu.perlinNoiseSeedPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  };
  menu.perlinNoiseSeedPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseSeedPlusSurface);

  //perlinWorldMapRows minus button hover update
  SDL_FreeSurface(menu.perlinNoiseWorldMapRowsMinusSurface);
  SDL_DestroyTexture(menu.perlinNoiseWorldMapRowsMinusTexture);
  if (input.mouse_x > menu.perlinNoiseWorldMapRowsMinusRect.x && input.mouse_x < (menu.perlinNoiseWorldMapRowsMinusRect.x + menu.perlinNoiseWorldMapRowsMinusRect.w) && input.mouse_y > menu.perlinNoiseWorldMapRowsMinusRect.y && input.mouse_y < (menu.perlinNoiseWorldMapRowsMinusRect.y + menu.perlinNoiseWorldMapRowsMinusRect.h)) {
    menu.perlinNoiseWorldMapRowsMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.blueColor);
    //input key mouse left update
    if (perlin.worldMapRows > WORLD_MAP_ROWS_MIN && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.worldMapRows -= 1;
      perlin_worldMapRowsIntToString();
      TTF_SizeText(font.type, perlin.worldMapRowsString, &menu.perlinNoiseWorldMapRowsValueWidth, &menu.perlinNoiseWorldMapRowsValueHeight);
      menu.perlinNoiseWorldMapRowsValueSurface = TTF_RenderText_Solid(font.type, perlin.worldMapRowsString, font.whiteColor);
      free(perlin.worldMapRowsString);
      menu.perlinNoiseWorldMapRowsValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapRowsValueSurface);
      menu.perlinNoiseWorldMapRowsValueRect.w = menu.perlinNoiseWorldMapRowsValueWidth;
      menu.perlinNoiseWorldMapRowsPlusRect.x = menu.perlinNoiseWorldMapRowsValueRect.x + menu.perlinNoiseWorldMapRowsValueRect.w;
    };
  } else {
    menu.perlinNoiseWorldMapRowsMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  };
  menu.perlinNoiseWorldMapRowsMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapRowsMinusSurface);

  //perlinWorldMapRows plus button hover update
  SDL_FreeSurface(menu.perlinNoiseWorldMapRowsPlusSurface);
  SDL_DestroyTexture(menu.perlinNoiseWorldMapRowsPlusTexture);
  if (input.mouse_x > menu.perlinNoiseWorldMapRowsPlusRect.x && input.mouse_x < (menu.perlinNoiseWorldMapRowsPlusRect.x + menu.perlinNoiseWorldMapRowsPlusRect.w) && input.mouse_y > menu.perlinNoiseWorldMapRowsPlusRect.y && input.mouse_y < (menu.perlinNoiseWorldMapRowsPlusRect.y + menu.perlinNoiseWorldMapRowsPlusRect.h)) {
    menu.perlinNoiseWorldMapRowsPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.blueColor);
    //input key mouse left update
    if (perlin.worldMapRows < WORLD_MAP_ROWS_MAX && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.worldMapRows += 1;
      perlin_worldMapRowsIntToString();
      TTF_SizeText(font.type, perlin.worldMapRowsString, &menu.perlinNoiseWorldMapRowsValueWidth, &menu.perlinNoiseWorldMapRowsValueHeight);
      menu.perlinNoiseWorldMapRowsValueSurface = TTF_RenderText_Solid(font.type, perlin.worldMapRowsString, font.whiteColor);
      free(perlin.worldMapRowsString);
      menu.perlinNoiseWorldMapRowsValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapRowsValueSurface);
      menu.perlinNoiseWorldMapRowsValueRect.w = menu.perlinNoiseWorldMapRowsValueWidth;
      menu.perlinNoiseWorldMapRowsPlusRect.x = menu.perlinNoiseWorldMapRowsValueRect.x + menu.perlinNoiseWorldMapRowsValueRect.w;
    };
  } else {
    menu.perlinNoiseWorldMapRowsPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  };
  menu.perlinNoiseWorldMapRowsPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapRowsPlusSurface);

  //perlinWorldMapCols minus button hover update
  SDL_FreeSurface(menu.perlinNoiseWorldMapColsMinusSurface);
  SDL_DestroyTexture(menu.perlinNoiseWorldMapColsMinusTexture);
  if (input.mouse_x > menu.perlinNoiseWorldMapColsMinusRect.x && input.mouse_x < (menu.perlinNoiseWorldMapColsMinusRect.x + menu.perlinNoiseWorldMapColsMinusRect.w) && input.mouse_y > menu.perlinNoiseWorldMapColsMinusRect.y && input.mouse_y < (menu.perlinNoiseWorldMapColsMinusRect.y + menu.perlinNoiseWorldMapColsMinusRect.h)) {
    menu.perlinNoiseWorldMapColsMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.blueColor);
    //input key mouse left update
    if (perlin.worldMapCols > WORLD_MAP_COLS_MIN && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.worldMapCols -= 1;
      perlin_worldMapColsIntToString();
      TTF_SizeText(font.type, perlin.worldMapColsString, &menu.perlinNoiseWorldMapColsValueWidth, &menu.perlinNoiseWorldMapColsValueHeight);
      menu.perlinNoiseWorldMapColsValueSurface = TTF_RenderText_Solid(font.type, perlin.worldMapColsString, font.whiteColor);
      free(perlin.worldMapColsString);
      menu.perlinNoiseWorldMapColsValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapColsValueSurface);
      menu.perlinNoiseWorldMapColsValueRect.w = menu.perlinNoiseWorldMapColsValueWidth;
      menu.perlinNoiseWorldMapColsPlusRect.x = menu.perlinNoiseWorldMapColsValueRect.x + menu.perlinNoiseWorldMapColsValueRect.w;
    };
  } else {
    menu.perlinNoiseWorldMapColsMinusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_MINUS, font.whiteColor);
  };
  menu.perlinNoiseWorldMapColsMinusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapColsMinusSurface);

  //perlinWorldMapCols plus button hover update
  SDL_FreeSurface(menu.perlinNoiseWorldMapColsPlusSurface);
  SDL_DestroyTexture(menu.perlinNoiseWorldMapColsPlusTexture);
  if (input.mouse_x > menu.perlinNoiseWorldMapColsPlusRect.x && input.mouse_x < (menu.perlinNoiseWorldMapColsPlusRect.x + menu.perlinNoiseWorldMapColsPlusRect.w) && input.mouse_y > menu.perlinNoiseWorldMapColsPlusRect.y && input.mouse_y < (menu.perlinNoiseWorldMapColsPlusRect.y + menu.perlinNoiseWorldMapColsPlusRect.h)) {
    menu.perlinNoiseWorldMapColsPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.blueColor);
    //input key mouse left update
    if (perlin.worldMapCols < WORLD_MAP_COLS_MAX && input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      perlin.worldMapCols += 1;
      perlin_worldMapColsIntToString();
      TTF_SizeText(font.type, perlin.worldMapColsString, &menu.perlinNoiseWorldMapColsValueWidth, &menu.perlinNoiseWorldMapColsValueHeight);
      menu.perlinNoiseWorldMapColsValueSurface = TTF_RenderText_Solid(font.type, perlin.worldMapColsString, font.whiteColor);
      free(perlin.worldMapColsString);
      menu.perlinNoiseWorldMapColsValueTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapColsValueSurface);
      menu.perlinNoiseWorldMapColsValueRect.w = menu.perlinNoiseWorldMapColsValueWidth;
      menu.perlinNoiseWorldMapColsPlusRect.x = menu.perlinNoiseWorldMapColsValueRect.x + menu.perlinNoiseWorldMapColsValueRect.w;
    };
  } else {
    menu.perlinNoiseWorldMapColsPlusSurface = TTF_RenderText_Solid(font.type, PERLIN_NOISE_PLUS, font.whiteColor);
  };
  menu.perlinNoiseWorldMapColsPlusTexture = SDL_CreateTextureFromSurface(renderer.self, menu.perlinNoiseWorldMapColsPlusSurface);

  //createWorld button hover update
  SDL_FreeSurface(menu.createWorldTextSurface);
  SDL_DestroyTexture(menu.createWorldTextTexture);
  if (input.mouse_x > menu.createWorldTextRect.x && input.mouse_x < (menu.createWorldTextRect.x + menu.createWorldTextRect.w) && input.mouse_y > menu.createWorldTextRect.y && input.mouse_y < (menu.createWorldTextRect.y + menu.createWorldTextRect.h)) {
    menu.createWorldTextSurface = TTF_RenderText_Solid(font.type, CREATE_WORLD_TEXT, font.greenColor);
    //input key mouse left update
    if (input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      world_init(perlin.frequency, perlin.depth, perlin.seed, perlin.worldMapRows, perlin.worldMapCols);
      worldInit = SDL_TRUE;
      menuVisible = SDL_FALSE;
    };
  } else {
    menu.createWorldTextSurface = TTF_RenderText_Solid(font.type, CREATE_WORLD_TEXT, font.whiteColor);
  };
  menu.createWorldTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.createWorldTextSurface);

  //loadWorld button hover update
  SDL_FreeSurface(menu.loadWorldTextSurface);
  SDL_DestroyTexture(menu.loadWorldTextTexture);
  if (input.mouse_x > menu.loadWorldTextRect.x && input.mouse_x < (menu.loadWorldTextRect.x + menu.loadWorldTextRect.w) && input.mouse_y > menu.loadWorldTextRect.y && input.mouse_y < (menu.loadWorldTextRect.y + menu.loadWorldTextRect.h)) {
    menu.loadWorldTextSurface = TTF_RenderText_Solid(font.type, LOAD_WORLD_TEXT, font.greenColor);
    //input key mouse left update
    if (input.key_mouse_left == SDL_TRUE && worldInit == SDL_FALSE) {
      //TODO
      //world_init(perlin.frequency, perlin.depth, perlin.seed);
      //worldInit = SDL_TRUE;
      //menuVisible = SDL_FALSE;
    };
  } else {
    menu.loadWorldTextSurface = TTF_RenderText_Solid(font.type, LOAD_WORLD_TEXT, font.whiteColor);
  };
  menu.loadWorldTextTexture = SDL_CreateTextureFromSurface(renderer.self, menu.loadWorldTextSurface);

  //exit button hover update
  SDL_FreeSurface(menu.exitButtonSurface);
  SDL_DestroyTexture(menu.exitButtonTexture);
  if (input.mouse_x > menu.exitButtonRect.x && input.mouse_x < (menu.exitButtonRect.x + menu.exitButtonRect.w) && input.mouse_y > menu.exitButtonRect.y && input.mouse_y < (menu.exitButtonRect.y + menu.exitButtonRect.h)) {
    menu.exitButtonSurface = TTF_RenderText_Solid(font.type, EXIT_BUTTON_TEXT, font.redColor);
    //input key mouse left update
    if (input.key_mouse_left == SDL_TRUE) {
      gameIsRunning = SDL_FALSE;
    };
  } else {
    menu.exitButtonSurface = TTF_RenderText_Solid(font.type, EXIT_BUTTON_TEXT, font.whiteColor);
  };
  menu.exitButtonTexture = SDL_CreateTextureFromSurface(renderer.self, menu.exitButtonSurface);
};

void menu_draw() {
  if (menuVisible == SDL_TRUE) {
    SDL_SetRenderDrawColor(renderer.self, MENU_COLOR_RGB_r, MENU_COLOR_RGB_g, MENU_COLOR_RGB_b, MENU_COLOR_RGB_a);
    SDL_RenderFillRect(renderer.self, &menu.windowRect);

    //menu label
    SDL_RenderCopy(renderer.self, menu.labelTextTexture, NULL, &menu.labelTextRect);

    //perlin noise frequency
    SDL_RenderCopy(renderer.self, menu.perlinNoiseFrequencyTextTexture, NULL, &menu.perlinNoiseFrequencyTextRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseFrequencyMinusTexture, NULL, &menu.perlinNoiseFrequencyMinusRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseFrequencyValueTexture, NULL, &menu.perlinNoiseFrequencyValueRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseFrequencyPlusTexture, NULL, &menu.perlinNoiseFrequencyPlusRect);

    //perlin noise depth text
    SDL_RenderCopy(renderer.self, menu.perlinNoiseDepthTextTexture, NULL, &menu.perlinNoiseDepthTextRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseDepthMinusTexture, NULL, &menu.perlinNoiseDepthMinusRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseDepthValueTexture, NULL, &menu.perlinNoiseDepthValueRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseDepthPlusTexture, NULL, &menu.perlinNoiseDepthPlusRect);

    //perlin noise seed text
    SDL_RenderCopy(renderer.self, menu.perlinNoiseSeedTextTexture, NULL, &menu.perlinNoiseSeedTextRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseSeedMinusTexture, NULL, &menu.perlinNoiseSeedMinusRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseSeedValueTexture, NULL, &menu.perlinNoiseSeedValueRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseSeedPlusTexture, NULL, &menu.perlinNoiseSeedPlusRect);

    //world map rows
    SDL_RenderCopy(renderer.self, menu.worldMapRowsTextTexture, NULL, &menu.worldMapRowsTextRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseWorldMapRowsMinusTexture, NULL, &menu.perlinNoiseWorldMapRowsMinusRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseWorldMapRowsValueTexture, NULL, &menu.perlinNoiseWorldMapRowsValueRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseWorldMapRowsPlusTexture, NULL, &menu.perlinNoiseWorldMapRowsPlusRect);

    //world map cols
    SDL_RenderCopy(renderer.self, menu.worldMapColsTextTexture, NULL, &menu.worldMapColsTextRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseWorldMapColsMinusTexture, NULL, &menu.perlinNoiseWorldMapColsMinusRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseWorldMapColsValueTexture, NULL, &menu.perlinNoiseWorldMapColsValueRect);
    SDL_RenderCopy(renderer.self, menu.perlinNoiseWorldMapColsPlusTexture, NULL, &menu.perlinNoiseWorldMapColsPlusRect);

    //createWorld button
    SDL_RenderCopy(renderer.self, menu.createWorldTextTexture, NULL, &menu.createWorldTextRect);

    //loadWorld button
    SDL_RenderCopy(renderer.self, menu.loadWorldTextTexture, NULL, &menu.loadWorldTextRect);

    //exit button
    SDL_RenderCopy(renderer.self, menu.exitButtonTexture, NULL, &menu.exitButtonRect);

    //divider
    SDL_SetRenderDrawColor(renderer.self, 255, 255, 255, 255);
    SDL_RenderDrawLine(renderer.self, menu.topDividerX1, menu.topDividerY1, menu.topDividerX2, menu.topDividerY2);
    SDL_RenderDrawLine(renderer.self, menu.centerLeftDividerX1, menu.centerLeftDividerY1, menu.centerLeftDividerX2, menu.centerLeftDividerY2);
    SDL_RenderDrawLine(renderer.self, menu.centerRightDividerX1, menu.centerRightDividerY1, menu.centerRightDividerX2, menu.centerRightDividerY2);
    SDL_RenderDrawLine(renderer.self, menu.bottomDividerX1, menu.bottomDividerY1, menu.bottomDividerX2, menu.bottomDividerY2);
  };
};

#endif