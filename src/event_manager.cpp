#include "event_manager.h"


EventManager::EventManager() {

}


EventManager::~EventManager() {
    
}


void EventManager::pollEvents(Sandbox &sandbox) {

    while (SDL_PollEvent(&event) != 0)
    {
        switch (event.type) {
        case SDL_EVENT_QUIT:
            sandbox.quit();
            break;
        }
    }
    
}