#ifndef POSITION_HPP
#define POSITION_HPP

#include <iostream>
#include <SDL/SDL.h>

class Position{
    private:
        SDL_Rect position;
        int x;
        int y;

    public:
        Position();
        Position(int _x, int _y);
};

#endif // POSITION_HPP
