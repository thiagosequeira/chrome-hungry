//
// Created by aureb on 29/8/2020.
//

#ifndef UNTITLED3_CORAZON_H
#define UNTITLED3_CORAZON_H

#include <ctime>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

class corazon {

public:
    float x;
    float y;
    Sprite sp;

    corazon();
    void setTexture(Texture &tex);
    void dibujar(RenderWindow &w);

};


#endif //UNTITLED3_CORAZON_H
