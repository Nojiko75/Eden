#include "drawableObject.hpp"

DrawableObject::DrawableObject() : GameObject()
{
    isFill = false;
}

DrawableObject::DrawableObject(std::string _name, Position _position, Color _color, bool _isFill) : GameObject(name)
{
    name = _name;
    position.setX(_position.getX());
    position.setX(_position.getY());
    color = _color;
    isFill = _isFill;
}

DrawableObject::~DrawableObject()
{

}
