//#include <iostream>
#include "Engine.h"

int main(void)
{
    Engine::init();

    while (Engine::isRunning())
    {
        Engine::handleEvents();
        Engine::render();
    }
    return 0;
}