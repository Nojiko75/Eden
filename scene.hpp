#ifndef SCENE_HPP
#define SCENE_HPP

#include <iostream>
#include <vector>
#include <SDL/SDL.h>

#include "gameObject.hpp"

using std::vector;

class Scene
{
    private:
        vector<GameObject*> objectsList;
        int length;
    public:
        Scene();
        Scene(const vector<GameObject*> objectsList);
        void add(GameObject* obj);
        void del(std::string name);
        void draw(SDL_Surface* surface);

        inline vector<GameObject*> getObjectsList() { return objectsList; }
        inline void setObjectsList(const vector<GameObject*> _list) { objectsList = _list; }
        inline int getLength() {return length;}
        inline void setLength(int _length){length = _length;}
};
#endif // SCENE_HPP
