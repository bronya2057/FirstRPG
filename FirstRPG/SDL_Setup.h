#pragma once
class CSDL_Setup
{
public:
	CSDL_Setup(bool* quit);
	~CSDL_Setup();
	SDL_Renderer* GetRenderer() const;
	SDL_Event* GetEvent();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* mainEvent;
};

