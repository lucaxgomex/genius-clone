#include "GameState.h"
#include "Console.h"

class PlayingState: 
    public GameState
{
    private:
        Console* console;

    public:
        void init();
        void loop();
        void render(sf::RenderWindow* window);
        void keyPressed();
        void keyReleased();
};  