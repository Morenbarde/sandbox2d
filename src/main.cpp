#include <iostream>

#include "sandbox.h"
#include "event_manager.h"
#include "render_view.h"

int main() {

    EventManager manager;

    Sandbox sandbox = Sandbox();
    sandbox.start();

    RenderView view = RenderView();
    view.init();

    while(sandbox.isRunning()) {
        manager.pollEvents(sandbox);
        sandbox.update();
        view.update();
    }

    return 0;
}
