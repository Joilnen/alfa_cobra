#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Cobra.h"

class Game {

    sf::RenderWindow window;
    sf::Sprite bIniciar;
    sf::Sprite bSair;
    std::map<std::string, sf::Sprite> alfaMap;
    std::map<std::string, sf::Texture> texture;
    unsigned int stepX, stepY;
    Cobra cobra;

    public:
        Game();
        ~Game();
        void initialization();
        void update(sf::Clock dt);
        void handleEvent(sf::Event ev);
        void finization();
        bool run();
};

#endif


