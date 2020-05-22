#include <iostream>
#include <SDL.h>
#include "src/window.h"

// TODO: Game Globals to a game state manager
bool gameRunning = 0;

void render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

  SDL_RenderClear(renderer);

  // SDL_RenderCopy(gameRenderer, someTexture, &someRectangle, &someRectangle2);

  SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[])
{
  Window gameWindow(
      "Ganymede",
      SDL_WINDOWPOS_CENTERED,
      SDL_WINDOWPOS_CENTERED,
      640,
      480,
      SDL_WINDOW_SHOWN);

  if (gameWindow.ready)
  {
    gameRunning = 1;
  }
  else
  {
    std::cout << "Something went wrong launching the game window\n";
  }

  while (gameRunning)
  {
    render(gameWindow.renderer);
  }

  return 0;
}
