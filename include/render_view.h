#ifndef _RENDERVIEW_H_
#define _RENDERVIEW_H_

#include <SDL3/SDL.h>
#include <SDL3/SDL_init.h>

#include "sandbox.h"

/*
    Manages SDL3 Rendering and handling
*/
class RenderView {
public:

    RenderView();
    ~RenderView();

    bool init();

    void update(Sandbox& sandbox);

private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;

    void render();
    void pollEvents(Sandbox& sandbox);


};

#endif