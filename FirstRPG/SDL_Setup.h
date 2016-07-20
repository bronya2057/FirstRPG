#pragma once
class CSDL_Setup
{
public:
	CSDL_Setup(bool* quit); //We pass a reference to quit
	~CSDL_Setup();
	SDL_Renderer* GetRenderer() const; //TWO GETTERS to get the event and renderer
	SDL_Event* GetEvent();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* mainEvent;
};
