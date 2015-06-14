#include "rectangle.hpp"

Rectangle::Rectangle(){

}

Rectangle::Rectangle(int _width, int _height){

}

Rectangle::~Rectangle(){
    SDL_FreeSurface(this);
    SDL_Quit();
}
