#pragma once
class CMain
{
public:
	CMain();
	~CMain();
	void GameLoop();
private:
	bool quit;

	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* mainEvent;

	SDL_Texture* grass_image;
	SDL_Rect grass_rect;

	SDL_Texture* bob_image;
	SDL_Rect bob_rect;
};

