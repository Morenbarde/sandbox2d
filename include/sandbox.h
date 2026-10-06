#ifndef _SANDBOX_H_
#define _SANDBOX_H_

class Sandbox {

public:
    Sandbox();
    ~Sandbox();

    // Get program state
    bool isRunning() const { return running; };

    // Set program state
    void start();
    void quit();

    void update();

private:
    bool running;

};

#endif