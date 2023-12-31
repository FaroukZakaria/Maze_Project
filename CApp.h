#ifndef CAPP_H
#define CAPP_H
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

class CApp
{
    public:
    CApp();

    int OnExecute();
    bool OnInit();
    void OnEvent(SDL_Event *event);
    void OnLoop();
    void OnRender();
    void OnExit();

    private:
    // SDL2 stuff
    bool isRunning;
    SDL_Window *pWindow;
    SDL_Renderer *pRenderer;
    
};

#endif