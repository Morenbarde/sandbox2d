#ifndef _RENDER_VIEW_H_
#define _RENDER_VIEW_H_

#include <SDL3/SDL.h>
#include <SDL3/SDL_init.h>

/*
    Manages SDL3 Rendering and handling
*/
class RenderView {
public:

    RenderView();
    ~RenderView();

    bool init();

    void update();

private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;

    void render();


};

#endif