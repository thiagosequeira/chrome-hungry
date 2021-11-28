//
// Created by aureb on 27/8/2020.
//

#include "classes/chrome.h"


chrome::chrome(Texture &tex){
    vel = 20;
    x = 0;
    y = 540 - (tex.getSize().y);
    sp.setTexture(tex);
}

void chrome::mover(bool side) {
    if(side){
        x += vel;
        if(x > 960 - sp.getTexture()->getSize().x){
            x = 960 - sp.getTexture()->getSize().x;
        }
    }
    else{
        x -= vel;
        if(x < 0){
            x = 0;
        }
    }
}

void chrome::dibujar(RenderWindow &w) {
    sp.setPosition(x, y);
    w.draw(sp);
}

void chrome::setTexture(Texture &tex) {
    sp.setTexture(tex);
}



