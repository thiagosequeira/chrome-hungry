//
// Created by aureb on 28/8/2020.
//

#ifndef UNTITLED3_RAM_H
#define UNTITLED3_RAM_H

#include <ctime>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

class ram {

public:
    float x;
    float y;
    float vel;
    Sprite sp;

    ram();
    void setTexture(Texture &tex);
    int comer();
    void caer();
    void dibujar (RenderWindow &w);
};


#endif //UNTITLED3_RAM_H
