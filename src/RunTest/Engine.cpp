#include "Engine.h"
using namespace sf;

RenderWindow Engine::window;

void Engine::init()
{
    window.create(VideoMode(640, 480), "Test!");
} 

bool Engine::isRunning()
{
    return window.isOpen();
}

void Engine::handleEvents()
{
    Event event;

    while (window.pollEvent(event))
    {
        switch (event.type)
        {
            case Event::Closed:
                window.close();
                //break;
        }
    }
}

void Engine::render()
{
    window.clear(Color::White);
    window.display();
}