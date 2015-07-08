#include "color.hpp"

Color::Color(){
    red = 0;
    green = 0;
    blue = 0;
}

Color::Color(int _r, int _g, int _b){
    red = _r;
    green = _g;
    blue = _b;
    /*if(color_name == "red"){
        SDL_MapRGB(format, 255, 0, 0);
    } else if(color_name == "green"){
        SDL_MapRGB(format, 0, 128, 0);
    } else if(color_name == "blue"){
        SDL_MapRGB(format, 0, 0, 255);
    }*/

    //Uint32 col = SDL_MapRGB(format, _r, _g, _b);
    //SDL_MapRGB(format, _red, _green, _blue);

    //eden.draw(rectangle, 300, 200, 5,5, "red");
}
