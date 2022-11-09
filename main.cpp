#include <SDL2/SDL.h>

#include <cstdlib>

int SDL_main(int,char**)
{
  SDL_Init(SDL_INIT_EVERYTHING);
  std::atexit(SDL_Quit);

  auto window = SDL_CreateWindow(nullptr, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

  SDL_Event event;

  while (true)
  {
    if (SDL_PollEvent(&event))
    {
      if (event.type == SDL_QUIT)
      {
        break;
      }
      continue;
    }
    SDL_UpdateWindowSurface(window);
  }

  SDL_DestroyWindow(window);

  return 0;
}