#include "sandbox.h"


Sandbox::Sandbox() {
    running = false;
}

Sandbox::~Sandbox() {

}

void Sandbox::start() {
    running = true;
}

void Sandbox::quit() {
    running = false;
}