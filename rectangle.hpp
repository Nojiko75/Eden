#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include <SDL/SDL.h>
#include "drawableObject.hpp"
#include "color.hpp"

class Rectangle : public DrawableObject
{
    private:
        int width;
        int height;
        Color color;
        Position position;
        SDL_Surface* rect;

    public:
        Rectangle();
        ~Rectangle();
        Rectangle(std::string name, Position _position, int width, int height, Color color, bool isFill);
        void draw(SDL_Surface *surface);

};
#endif // RECTANGLE_HPP
