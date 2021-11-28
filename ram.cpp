//
// Created by aureb on 28/8/2020.
//

#include "classes/ram.h"

ram::ram() {
    vel = 1;
    x = 150;
    y = 0;
}

void ram::setTexture(Texture &tex){
    sp.setTexture(tex);
}

void ram::dibujar(RenderWindow &w) {
    y += vel;
    sp.setPosition(x, y);
    w.draw(sp);
}