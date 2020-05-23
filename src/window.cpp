#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
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

void Window::textureLoader(char *name, char *texture)
{
  SDL_Surface *tempSurface = IMG_Load(texture);
  SDL_Texture *newTexture = SDL_CreateTextureFromSurface(renderer, tempSurface);
  SDL_FreeSurface(tempSurface);

  textureCache.insert({name, newTexture});
}
