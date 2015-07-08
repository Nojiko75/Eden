#ifndef POSITION_HPP
#define POSITION_HPP

#include <iostream>
#include <SDL/SDL.h>

class Position{
    public:
        SDL_Rect position;
        int x;
        int y;

    public:
        Position();
        Position(int _x, int _y);
        inline void setX(int _x){ x = _x;}
        inline int getX(){ return x;}
        inline void setY(int _y){ y = _y;}
        inline int getY(){ return y;}
};

#endif // POSITION_HPP


