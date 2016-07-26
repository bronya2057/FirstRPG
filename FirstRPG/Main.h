#pragma once
#include "SDL_Setup.h"
#include "Sprite.h"

class CMain
{
public:
	CMain(int passed_ScreenWidth, int passed_ScreenHeight);
	~CMain();
	void GameLoop();
	CSprite* grass;
	CSprite* bob;

private:
	bool quit;
	int ScreenWidth;
	int ScreenHeight;
	CSDL_Setup* csdl_setup; //OBJECT OF CSDL CLASS to get the renderer and event out of SDL_Setup
};

