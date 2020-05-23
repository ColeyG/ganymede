#ifndef WINDOW_H
#define WINDOW_H

#include <bits/stdc++.h>
#include <SDL.h>

class Window
{
public:
  SDL_Window *window = 0;
  SDL_Renderer *renderer = 0;
  bool ready = false;
  std::map<char *, SDL_Texture *> textureCache{};
  Window(const char *title, int xpos, int ypos, int height, int width, int flags);
  void textureLoader(char *name, char *texture);
};

#endif
