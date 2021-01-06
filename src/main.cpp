#include <iostream>
#include <SFML/Graphics.hpp>

void drawScreen() 
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Welcome to the Genius Game!"); //resoluçao da tela
    sf::CircleShape buttonShape(100.f); //forma 
    buttonShape.setFillColor(sf::Color::Blue); //cor

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {   
            if (event.type == sf::Event::Closed) 
            {
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed)
            {
                std::cout << "Hello World" << std::endl;
            }
            /*   
            switch (event.type)
            {
                // window closed
                case sf::Event::Closed:
                    window.close();
                    break;

                // key pressed
                case sf::Event::MouseButtonPressed:
                    std::cout << "IN!" << std::endl;
                    break;
                
                // we don't process other types of events
                default:
                    break;
            }
            */
        }
        window.clear();
        window.draw(buttonShape);
        window.display();
    }
}
/*
int main(void)
{
    drawScreen();
    return 0;
}
*/