#include "SFML/Graphics.hpp"

class Engine
{
    private:
        static sf::RenderWindow window;

    public:
        static void init();
        static bool isRunning();
        static void handleEvents();
        static void render();
};