#include <iostream>
#include <SDL.h>

#undef main

int main()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "Video Initialization Error: " << SDL_GetError() << std::endl;
		return 1;
	}

	/* ... */
	SDL_Quit();
}