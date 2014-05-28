#include "Game.h"
#include "Cobra.h"
#include <iostream>

Game::Game(): stepX(0), stepY(0) {

}

Game::~Game() {

}

void Game::initialization() {
    window.create(sf::VideoMode::getFullscreenModes()[0], "Cobrinha Joi");
    sf::Texture t;
    t.loadFromFile("../assets/button_iniciar_off.png");
    texture.insert(std::pair<std::string, sf::Texture>("iniciar", t));
    bIniciar.setTexture(texture["iniciar"]);
    bIniciar.setPosition(window.getSize().x - bIniciar.getLocalBounds().width - 50, window.getSize().y - 2 * bIniciar.getLocalBounds().height - 2 * 50);
    t.loadFromFile("../assets/button_sair_off.png");
    texture.insert(std::pair<std::string, sf::Texture>("sair", t));
    bSair.setTexture(texture["sair"]);
    bSair.setPosition(window.getSize().x - bSair.getLocalBounds().width - 50, window.getSize().y - bSair.getLocalBounds().height - 50);

}

bool Game::run() {

    sf::Event e;

    while(window.pollEvent(e)) {

        if(e.type == sf::Event::Closed) 
            window.close();

        if(e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::Escape)
            window.close();
        if(e.type == sf::Event::MouseButtonPressed && e.mouseButton.button == sf::Mouse::Left) {

            if(bIniciar.getGlobalBounds().contains(sf::Vector2f(e.mouseButton.x, e.mouseButton.y))) {
                texture["iniciar"].loadFromFile("../assets/button_iniciar_on.png");
                std::cout << "Clicou no iniciar\n";
            }

            if(bSair.getGlobalBounds().contains(sf::Vector2f(e.mouseButton.x, e.mouseButton.y))) {
                texture["sair"].loadFromFile("../assets/button_sair_on.png");
                std::cout << "Clicou no sair\n";
                window.close();
            }
        }

        window.clear();
        window.draw(bIniciar);
        window.draw(bSair);

        cobra.draw(window);
        
        window.display();


    }

    return window.isOpen();
}


