#define SDL_MAIN_HANDLED
#include <SDL.h>

#include <stdlib.h>


int main(int argc,char** argv)
{
  SDL_Window* window = NULL;
  SDL_Event event;

  SDL_Init(SDL_INIT_EVERYTHING);
  atexit(&SDL_Quit);

  SDL_LogSetAllPriority(SDL_LOG_PRIORITY_VERBOSE);

  window = SDL_CreateWindow("Hello !", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
  if (!window) {
    return -1;
  }
  for (;;)
  {
    if (SDL_PollEvent(&event))
    {
      if (event.type == SDL_QUIT)
      {
        break;
      }
      continue;
    }
    if (SDL_UpdateWindowSurface(window))
      break;
  }

  SDL_DestroyWindow(window);

  return 0;
}