#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class MyMouse {
    public:
        MyMouse(const sf::Window& _window, int mouse_width, int mouse_height):

        window(_window)
        {
            //initialize box
            mouse_box.width = mouse_width;
            mouse_box.height = mouse_height;
        }

        sf::Vector2i getPosition(const sf::Window &relativeTo){
            return sf::Mouse::getPosition(relativeTo);
        }

        //WRAP THE REST OF sf::Mouse FUNCTIONS
        bool intersects(sf::FloatRect& other_box){
            //update before comparing
            mouse_box.left =  sf::Mouse::getPosition(window).x;
            mouse_box.top =  sf::Mouse::getPosition(window).y;

            return mouse_box.intersects(other_box);
        }

    private:
        const sf::Window& window;
        sf::FloatRect mouse_box;
};

/*
int main(void)
{
    MyMouse mouse(window, 16, 16); //initialize

    mouse.intersects( statBox.getGlobalBounds() ); //assuming statBox is a sf::Sprite
}
*/