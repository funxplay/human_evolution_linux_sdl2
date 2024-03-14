#ifndef MUSIC_H_INCLUDED
#define MUSIC_H_INCLUDED

struct Music {
  Mix_Music *background; 
} music;

void music_init() {
  music.background = Mix_LoadMUS("snd/bg.mp3");
};

void music_playBackground () {
  Mix_PlayMusic(music.background, -1);
};
#endif
