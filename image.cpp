#include "image.hpp"

Image::Image(){}


Image::Image(std::string _path, Position _position)
{
    path = _path;
    position =  _position;
    char* charName= new char [_path.length()-1];
    strcpy(charName,_path.c_str());
    img = IMG_Load(charName);
}

void Image::draw(SDL_Surface* surface)
{
    SDL_Rect p;
    p.x = 0;
    p.y = 0;
    SDL_BlitSurface(img, NULL, surface, &p);
}
