#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>

class Window
{
public:
  Window(const char *title, int xpos, int ypos, int height, int width, int flags);
  bool ready = false;
  SDL_Window *window = 0;
  SDL_Renderer *renderer = 0;
};

#endif
