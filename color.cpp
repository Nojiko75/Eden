#include "color.hpp"

/*Color::Color(){
    SDL_MapRGB(format, 255, 255, 255); //couleur blanche par défaut
}*/

Color::Color(SDL_PixelFormat* format, std::string color_name){
    if(color_name == "red"){
        SDL_MapRGB(format, 255, 0, 0);
    } else if(color_name == "green"){
        SDL_MapRGB(format, 0, 128, 0);
    } else if(color_name == "blue"){
        SDL_MapRGB(format, 0, 0, 255);
    }
    //SDL_MapRGB(format, _red, _green, _blue);

    //eden.draw(rectangle, 300, 200, 5,5, "red");
}
