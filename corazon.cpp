//
// Created by aureb on 29/8/2020.
//

#include "classes/corazon.h"


corazon::corazon(){

}
void corazon::setTexture(Texture &tex){
    sp.setPosition(x, y);
    sp.setTexture(tex);
}

void corazon::dibujar(RenderWindow &w){
    w.draw(sp);
}