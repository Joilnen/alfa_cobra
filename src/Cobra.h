#ifndef COBRA_H
#define COBRA_H

#include <SFML/Graphics.hpp>
#include <vector>

class Cobra {

    std::vector<sf::Sprite> body;
    std::vector<sf::Vector2i> direction;
    int size;
    sf::Texture t;

    void compose();
    void move();
    public:
        Cobra();
        ~Cobra();
        void step();
        void draw(sf::RenderWindow &rw);
};

#endif

