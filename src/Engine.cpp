#include "Engine.h"
#include "PlayingState.h"
using namespace sf;

RenderWindow Engine::window;
Console Engine::console("Engine");
StateManager Engine::gamestates;

void Engine::init()
{
    window.create(VideoMode(640, 480), "Test!");
    console.writeLine("Created Window");
    gamestates.addState(new PlayingState);
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
                console.writeLine("Closing Window...");
                window.close();
                break;
            case Event::KeyPressed:
                gamestates.keyPressed(event.key.code);
                break;
            case Event::KeyReleased:
                gamestates.keyReleased(event.key.code);
                break; 
            default:
                break;  
        }
        gamestates.loop();
    }
}

void Engine::render()
{
    window.clear(Color::White);
    gamestates.render(&window);
    window.display();
}