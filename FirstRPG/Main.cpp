#include "stdafx.h"
#include "Main.h"


CMain::CMain()
{
	quit = false;
	window = nullptr;
	window = SDL_CreateWindow("My First RPG", 100, 100, 600, 400, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
	if (window == nullptr)
	{
		std::cout << "WINDOW couldn't be created";
		quit == true;
		//return 0;
	}
	renderer = nullptr;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	mainEvent = new SDL_Event;
	//SPRITES

	grass_image = nullptr;
	grass_image = IMG_LoadTexture(renderer, "data/grass.bmp");
	if (grass_image == nullptr) { std::cout << "Couldn't load GRASS!" << std::endl; }

	grass_rect.x = 0;
	grass_rect.y = 0;
	grass_rect.w = 600;
	grass_rect.h = 400;

	bob_image=nullptr;
	bob_image = IMG_LoadTexture(renderer, "data/man.png");
	if (bob_image == nullptr) { std::cout << "Couldn't load Bob!" << std::endl; }

	bob_rect.x = 100;
	bob_rect.y = 150;
	bob_rect.w = 200;
	bob_rect.h = 200;
}

CMain::~CMain()
{
	SDL_DestroyTexture(bob_image);
	SDL_DestroyTexture(grass_image);
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	delete mainEvent;
}

void CMain::GameLoop(void)
{
	while (!quit && mainEvent->type != SDL_QUIT)
	{
		SDL_PollEvent(mainEvent);
		SDL_RenderClear(renderer);
		//EXECUTION WHAT IS BEHIND WHAT
		//DRAW GRASS
		SDL_RenderCopy(renderer, grass_image, nullptr, &grass_rect);
		//DRAW BOB
		SDL_RenderCopy(renderer, bob_image, nullptr, &bob_rect);




		SDL_RenderPresent(renderer);
	}
}