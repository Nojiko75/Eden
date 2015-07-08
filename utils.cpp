#include "Utils.hpp"

Utils::Utils()
{

}

void Utils::setPixel(SDL_Surface* _surface, int _x, int _y, Uint32 _color)
{
    if (_x >= 0 && _x < _surface->w && _y >= 0 && _y < _surface->h)
    {
        *((Uint32*)(_surface->pixels) + _x + _y * _surface->w) = _color;
    }

}

void Utils::horizontalLine(SDL_Surface* _surface, int _x, int _y, int _w, Uint32 _color)
{
    SDL_Rect r;

    r.x = _x;
    r.y = _y;
    r.w = _w;
    r.h = 1;

    SDL_FillRect(_surface, &r, _color);
}

void Utils::verticalLine(SDL_Surface* _surface, int _x, int _y, int _h, Uint32 _color)
{
    SDL_Rect r;

    r.x = _x;
    r.y = _y;
    r.w = 1;
    r.h = _h;

    SDL_FillRect(_surface, &r, _color);
}
