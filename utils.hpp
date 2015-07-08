#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <SDL/SDL.h>

/*classe d'aide au dessin*/
class Utils
{
    public:
        Utils();
        static void setPixel(SDL_Surface *surface, int x, int y, Uint32 color);
        static void horizontalLine(SDL_Surface *surface, int x, int y, int w, Uint32 color);
        static void verticalLine(SDL_Surface *surface, int x, int y, int h, Uint32 color);
};

#endif // UTILS_HPP
