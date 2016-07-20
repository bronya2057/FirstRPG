#include "stdafx.h"
#include "SDL_Setup.h"


CSDL_Setup::CSDL_Setup(bool* quit)
{
	window = nullptr;
	window = SDL_CreateWindow("My First RPG", 100, 100, 600, 400, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
	if (window == nullptr)
	{
		std::cout << "WINDOW couldn't be created";
		*quit = true;
		//return 0;
	}
	renderer = nullptr;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	mainEvent = new SDL_Event();
}


CSDL_Setup::~CSDL_Setup()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	delete mainEvent;
}

SDL_Renderer* CSDL_Setup::GetRenderer() const
{
	return renderer;
}

SDL_Event* CSDL_Setup::GetEvent()
{
	return mainEvent;
}

void CSDL_Setup::Begin()
{
	SDL_PollEvent(GetEvent());
	SDL_RenderClear(GetRenderer());
}

void CSDL_Setup::End() const
{
	SDL_RenderPresent(GetRenderer());
}
