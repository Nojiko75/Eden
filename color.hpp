#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>
#include <SDL/SDL.h>

class Color{
    private:
        int red;
        int green;
        int blue;

    public:
        Color();
        Color(int _red, int _green, int _blue);
        inline int getRed() { return red; }
        void setRed(int _red) { red = _red; }
        inline int getGreen() { return green; }
        void setGreen(int _green) { green = _green; }
        inline int getBlue() { return blue; }
        void setBlue(int _blue) { blue = _blue; }

};

#endif // EDEN_HPP
