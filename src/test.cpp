#include <iostream>
#include <SFML/Graphics.hpp>
/*
int main(void)
{
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;
    const int BITS_PER_PIXEL = 32;

    sf::VideoMode VMode(SCREEN_WIDTH , SCREEN_HEIGHT , BITS_PER_PIXEL);
    sf::RenderWindow window(VMode , "SFML!" , sf::Style::Titlebar | sf::Style::Close);

    sf::Vector2i mouse_position;
    mouse_position = sf::Mouse::getPosition( window );

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape) 
            {
                window.close();
            }

            if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
            {
                mouse_position.x = event.mouseButton.x;
                mouse_position.y = event.mouseButton.y;
            }
        }

        window.clear();

        if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
        {
            sf::RectangleShape box;

            box.setPosition( mouse_position.x , mouse_position.y );
            box.setSize( sf::Vector2f( sf::Mouse::getPosition().x - mouse_position.x , sf::Mouse::getPosition().y - mouse_position.y ) );
            box.setFillColor( sf::Color::White );
            window.draw(box);
        }

        window.display();
    }
    return 0;
}
*/