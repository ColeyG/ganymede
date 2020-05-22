#include <iostream>
#include "window.h"

Window::Window(const char *title, int xpos, int ypos, int height, int width, int flags)
{
  if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
  {
    window = SDL_CreateWindow(title, xpos, ypos, height, width, flags);

    if (window == 0)
    {
      renderer = SDL_CreateRenderer(window, -1, 0);
    }
  }
  else
  {
    std::cout << "SDL did not initialize\n";
  }

  ready = true;
}
