#ifndef _EVENT_MANAGER_H_
#define _EVENT_MANAGER_H_


#include <SDL3/SDL.h>

#include "sandbox.h"

class EventManager {
public:

    EventManager();
    ~EventManager();

    void pollEvents(Sandbox &sandbox);

private:
    SDL_Event event;
    
};

#endif