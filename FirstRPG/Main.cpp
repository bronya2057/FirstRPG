#include "stdafx.h"
#include "Main.h"


CMain::CMain()
{
	quit = false;


	csdl_setup = new CSDL_Setup(&quit);
	//SPRITES

	grass_image = nullptr;
	grass_image = IMG_LoadTexture(csdl_setup->GetRenderer(), "data/grass.bmp");
	if (grass_image == nullptr) { std::cout << "Couldn't load GRASS!" << std::endl; }

	grass_rect.x = 0;
	grass_rect.y = 0;
	grass_rect.w = 600;
	grass_rect.h = 400;

	bob_image=nullptr;
	bob_image = IMG_LoadTexture(csdl_setup->GetRenderer(), "data/man.png");
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
	
}

void CMain::GameLoop(void) const
{
	while (!quit && csdl_setup->GetEvent()->type != SDL_QUIT)
	{
		csdl_setup->Begin();

		//EXECUTION WHAT IS BEHIND WHAT
		//DRAW GRASS
		SDL_RenderCopy(csdl_setup->GetRenderer(), grass_image, nullptr, &grass_rect);
		//DRAW BOB
		SDL_RenderCopy(csdl_setup->GetRenderer(), bob_image, nullptr, &bob_rect);



		csdl_setup->End();
	}
}
