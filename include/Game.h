#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "..\include\Player.h"

class Game {
public:
    Game();
    ~Game();

    void init();
    void run();
    void processEvents();
    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
    void update();
    void render();
    void cleanup();
    bool isRunning() const;

private:
        sf::RenderWindow m_window;
        int window_width;
        int window_height;
        int frames_per_second;
        bool m_is_running;
        Player player;
};

#endif // GAME_H