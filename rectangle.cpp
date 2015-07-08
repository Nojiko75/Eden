#include "rectangle.hpp"
#include "utils.hpp"

Rectangle::Rectangle() : DrawableObject()
{

}

Rectangle::Rectangle(std::string _name, Position _position, int _width, int _height, Color _color, bool _isFill) : DrawableObject(name, position, color, isFill)
{
    name = _name;
    position = _position;
    width = _width;
    height = _height;
    color = _color;
    isFill = _isFill;
    rect = SDL_CreateRGBSurface(SDL_HWSURFACE, width, height, 32, 0, 0, 0, 0);
}

void Rectangle::draw(SDL_Surface* _surface)
{
    /*Utils::horizontalLine(_surface, x, y, width, color);
    Utils::horizontalLine(_surface, x, y + height - 1, width, color);
    Utils::verticalLine(_surface, x, y + 1, height - 2, color);
    Utils::verticalLine(_surface, x + width - 1, y + 1, height - 2, color);*/

    SDL_Rect r;
    r.x = position.x;
    r.y = position.y;
    r.w = width;
    r.h = height;

    SDL_FillRect(rect, NULL, SDL_MapRGB(_surface->format, color.getRed(), color.getGreen(), color.getBlue()));
    SDL_BlitSurface(rect, NULL, _surface, &r);
    SDL_FreeSurface(rect);
}

Rectangle::~Rectangle()
{
    SDL_FreeSurface(rect);
    //SDL_Quit();
}

