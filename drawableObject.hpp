#ifndef DRAWABLEOBJECT_HPP
#define DRAWABLEOBJECT_HPP

#include <iostream>
#include <SDL/SDL.h>
#include "gameObject.hpp"
#include "color.hpp"
#include "position.hpp"

class DrawableObject : public GameObject
{
    protected:
        Color color;
        bool isFill;
        Position position;

    public:
        DrawableObject(std::string _name, Position _position, Color _color, bool _isFill);
        DrawableObject();
        ~DrawableObject();
        virtual void draw(SDL_Surface* surface) = 0;
};

#endif // DRAWABLEOBJECT_HPP
