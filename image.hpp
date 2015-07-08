#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "position.hpp"

class Image{
    private:
        Position position;
        std::string path;
        SDL_Surface* img;

    public:
        Image();
        Image(std::string _path, Position _position);
        void draw(SDL_Surface* surface);
};

#endif // IMAGE_HPP
