#include "stdafx.h"
#include "Main.h"

CMain::CMain()
{
	quit = false;

	csdl_setup = new CSDL_Setup(&quit);
	
	//SPRITES
	grass = new CSprite(csdl_setup->GetRenderer(),"data/grass.bmp",0,0,600,400);
	bob= new CSprite(csdl_setup->GetRenderer(), "data/man.png", 60, 60, 250, 200);
}

CMain::~CMain()
{

	
}

void CMain::GameLoop(void) const
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
