#include "gameObject.hpp"

GameObject::GameObject()
{
    name = "Object";
}

GameObject::GameObject(std::string _name)
{
    if(_name != "")
    {
        name =_name;
    } else {
        name = "Object";
    }
}

void GameObject::draw(SDL_Surface* _surface)
{

}

GameObject::~GameObject()
{

}
