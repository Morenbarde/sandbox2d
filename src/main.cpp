#include <iostream>

#include "sandbox.h"
#include "render_view.h"

int main() {

    Sandbox sandbox = Sandbox();
    sandbox.start();

    RenderView view = RenderView();
    view.init();

    while(sandbox.isRunning()) {
        view.update(sandbox);
    }

    return 0;
}
