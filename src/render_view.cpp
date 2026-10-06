#include "render_view.h"

RenderView::RenderView() {
    
}

RenderView::~RenderView() {


    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}


bool RenderView::init() {
    // Returns true if success, false if failed

    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO)) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
        return false;
    }

    if (!SDL_CreateWindowAndRenderer("Sandbox2D", 1024, 512, SDL_WINDOW_RESIZABLE, &window, &renderer)) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create window and renderer: %s", SDL_GetError());
        return false;
    }

    return true;
}


void RenderView::update() {

    render();
    
}


void RenderView::render() {

    SDL_SetRenderDrawColor(renderer, 50, 0, 75, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

}
