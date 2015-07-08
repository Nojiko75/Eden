#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <iostream>
#include <SDL/SDL.h>

class GameObject{
    protected:
        std::string name;

    public:
        GameObject();
        GameObject(std::string _name);
        ~GameObject();
        virtual void draw(SDL_Surface* surface) = 0;
        inline std::string getName() { return name; }
        inline void setName(std::string _name) { name = _name; }
};
#endif // GAMEOBJECT_HPP
