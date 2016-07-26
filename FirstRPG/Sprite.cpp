#include "stdafx.h"
#include "Sprite.h"


CSprite::CSprite(SDL_Renderer* passed_renderer, std::string filepath, int x, int y, int width, int height)
{
	renderer = passed_renderer;
	image = nullptr;
	image = IMG_LoadTexture(passed_renderer, filepath.c_str());
	if (image == nullptr) { std::cout << "Couldn't load"<<filepath.c_str()<< std::endl; }

	rect.x = x;
	rect.y = y;
	rect.w = width;
	rect.h = height;
}


CSprite::~CSprite()
{
	SDL_DestroyTexture(image);
	
}

void CSprite::Draw() const
{
	SDL_RenderCopy(renderer, image, nullptr, &rect);
}

