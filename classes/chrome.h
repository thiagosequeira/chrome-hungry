//
// Created by aureb on 27/8/2020.
//

#ifndef UNTITLED3_CHROME_H
#define UNTITLED3_CHROME_H

#include <ctime>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;


class chrome {

public:
    float x;
    float y;
    float vel;
    Texture tex;
    Sprite sp;

    chrome(Texture &tex);
    void mover (bool side);
    void setTexture(Texture &tex);
    void dibujar (RenderWindow &w);
};


#endif //UNTITLED3_CHROME_H
