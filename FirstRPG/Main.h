#pragma once
#include "SDL_Setup.h"


class CMain
{
public:
	CMain();
	~CMain();
	void GameLoop() const;
	
private:
	bool quit;

	SDL_Texture* grass_image;
	SDL_Rect grass_rect;

	SDL_Texture* bob_image;
	SDL_Rect bob_rect;

	CSDL_Setup* csdl_setup;
};

