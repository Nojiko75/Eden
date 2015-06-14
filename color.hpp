#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>
#include <SDL/SDL.h>

class Color{
    private:
        std::string color_name;
        int red;
        int green;
        int blue;

    public:
        //Color();
        Color(SDL_PixelFormat* format, std::string color_name);
};

#endif // EDEN_HPP
