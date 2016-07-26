#include "stdafx.h"
#include "Main.h"

CMain::CMain(int passed_ScreenWidth,int passed_ScreenHeight)
{
	ScreenWidth = passed_ScreenWidth;
	ScreenHeight = passed_ScreenHeight;

	quit = false;

	csdl_setup = new CSDL_Setup(&quit, ScreenWidth, ScreenHeight);
	
	//SPRITES
	grass = new CSprite(csdl_setup->GetRenderer(),"data/grass.bmp",0,0,600,400);
	bob= new CSprite(csdl_setup->GetRenderer(), "data/man.png", 60, 60, 100, 100);
}

CMain::~CMain()
{
	delete csdl_setup;
	delete grass;
	delete bob;

	
}

void CMain::GameLoop(void) 
{
	while (!quit && csdl_setup->GetEvent()->type != SDL_QUIT)
	{
		csdl_setup->Begin();

		//EXECUTION WHAT IS BEHIND WHAT
		
		grass->Draw();
			
			

		bob->Draw();

		csdl_setup->End();
	}
}
