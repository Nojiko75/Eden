#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include <SDL/SDL.h>

class Rectangle{
    private:
        int width;
        int height;
        //SDL_Surface* rect;

    public:
        Rectangle();
        Rectangle(int _widht, int _height);
        ~Rectangle();



};
#endif // RECTANGLE_HPP
