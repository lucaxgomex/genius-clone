#include "PlayingState.h"
#include "SFML/Graphics.hpp"
using namespace sf;

void PlayingState::init()
{
    console = new Console("PlayingState");
    console->writeLine("Init done");
}

void PlayingState::render(RenderWindow* window)
{
    CircleShape circle(200);
    circle.setFillColor(Color::Blue);
    window->draw(circle);
}

void PlayingState::keyPressed()
{
    console->writeLine("Pressed");

}

void PlayingState::keyReleased()
{
    console->writeLine("Released");    
}