#include <iostream>
#include <SDL.h>
#include "src/window.h"
#include "src/gamestate.h"

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

  Gamestate ganymedeGameState;

  if (gameWindow.ready)
  {
    ganymedeGameState.running = 1;
  }
  else
  {
    std::cout << "Something went wrong launching the game window\n";
  }

  while (ganymedeGameState.running)
  {
    render(gameWindow.renderer);
  }

  return 0;
}
