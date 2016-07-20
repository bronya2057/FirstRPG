// FirstRPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char * argv[])
{
	bool quit = false;
	////////////INITIALIZATION
	SDL_Init(SDL_INIT_VIDEO);
	////////////CREATE THE WINDOW POINTER
	SDL_Window* window;
	
	window = SDL_CreateWindow("My First RPG", 100, 100, 600, 400,SDL_WINDOW_SHOWN|SDL_WINDOW_RESIZABLE);

	if(window == NULL)
	{
		std::cout << "WINDOW couldn't be created";
		return 0;
	}
	////////////CREATE THE RENDERER
	SDL_Renderer* renderer;

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	////////////CREATE EVENT and do so the window will not stuck;
	SDL_Event* mainEvent = new SDL_Event;
	///////////////CREATE TEXTURE THEN SET COORDS AND DROP IT
	SDL_Texture* grass_image;
	grass_image = IMG_LoadTexture(renderer,"grass.bmp");

	SDL_Rect grass_rect;
	grass_rect.x = 0;
	grass_rect.y = 0;
	grass_rect.w = 600;
	grass_rect.h = 400;

	SDL_Texture* bob_image;
	bob_image = IMG_LoadTexture(renderer, "man1.png");

	SDL_Rect bob_rect;
	bob_rect.x = 100;
	bob_rect.y = 150;
	bob_rect.w = 200;
	bob_rect.h = 200;

	while(!quit && mainEvent->type !=SDL_QUIT)
	{
		SDL_PollEvent(mainEvent);
		SDL_RenderClear(renderer);
		//EXECUTION WHAT IS BEHIND WHAT
		//DRAW GRASS
		SDL_RenderCopy(renderer, grass_image, NULL,&grass_rect );
		//DRAW BOB
		SDL_RenderCopy(renderer, bob_image, nullptr, &bob_rect);




		SDL_RenderPresent(renderer);
	}

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	delete mainEvent;

	return 0;
}

