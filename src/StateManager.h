#include <stack>
#include "SFML/Graphics.hpp"
#include "GameState.h"
#include "Console.h"

class StateManager
{
    private:
        std::stack<GameState*> states;
        Console console;

    public:
        void addState(GameState* state);
        void loop();
        void render(sf::RenderWindow* window);
        void keyPressed(int code);
        void keyReleased(int code);
};