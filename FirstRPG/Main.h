#pragma once
#include "SDL_Setup.h"
#include "Sprite.h"

class CMain
{
public:
	CMain();
	~CMain();
	void GameLoop() const;
	CSprite* grass;
	CSprite* bob;

private:
	bool quit;

	



	CSDL_Setup* csdl_setup; //OBJECT OF CSDL CLASS to get the renderer and event out of SDL_Setup
};

