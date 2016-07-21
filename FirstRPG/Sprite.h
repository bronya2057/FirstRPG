#pragma once
class CSprite
{
	SDL_Texture* image;
	SDL_Rect rect;
	SDL_Renderer* renderer;
	

public:
	void Draw() const;
	CSprite(SDL_Renderer* passed_renderer,std::string filepath,int x,int y,int width,int height);
	~CSprite();

};

