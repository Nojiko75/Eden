#include "main.hpp"
#include "Rectangle.hpp"
#include "color.hpp"

using namespace std;

int main(int argc, char** argv){
    Eden eden;
    Color color(255, 255, 0);
    Position p(50,50);
    Rectangle rect("Rect", p, 100, 150, color, true);
    //eden.getScene().add(&rect);
    //rect.draw(eden.getSurface());
    //SDL_Flip(eden.getSurface());
    eden.run();
    return 0;
}
