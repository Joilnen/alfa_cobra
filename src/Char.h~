#ifndef CHAR_H
#define CHAR_H

#include <SFML/Graphics.hpp>

class Char {

    sf::Texture t;
    std::vector<sf::Sprite> charList;
    std::vector<sf::Vector2i> direction;
    char c;
    public:
        Char();
        ~Char();
        void setChar(char c);
        void draw(sf::RenderWindow &w);
        void setRandomPosition();
        sf::Vector2i getPosition();
        void eaten();
};

#endif


