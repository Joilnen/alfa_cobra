#include "Cobra.h"

Cobra::Cobra() {
    t.loadFromFile("../assets/cobra.png", sf::IntRect(0, 0, 153, 264));
    body.push_back(sf::Sprite(t));

    t.loadFromFile("../assets/cobra.png", sf::IntRect(166, 7, 151, 151));
    body.push_back(sf::Sprite(t)); 
}

Cobra::~Cobra() {

}

void Cobra::step() {

}

void Cobra::draw(sf::RenderWindow &rw) {
    body[0].setPosition(400, 400);
    rw.draw(body[0]);
    rw.draw(body[1]);
}

void Cobra::compose() {

}


