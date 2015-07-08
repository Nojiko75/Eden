#include "scene.hpp"

Scene::Scene()
{
    length = objectsList.size();
}

Scene::Scene(const vector<GameObject*> _objectsList)
{
    if(_objectsList.size() > 0){
        objectsList = _objectsList;
    }
    length = objectsList.size();
}

void Scene::add(GameObject* obj)
{
    objectsList.push_back(obj);
}

void Scene::del(std::string name)
{
    vector<GameObject*>::iterator toRemove;
    for(vector<GameObject*>::iterator it = objectsList.begin(); it != objectsList.end(); ++it)
    {
        if((*it)->getName() == name)
        {
            toRemove = it;
            break;
        }
    }
    objectsList.erase(toRemove, toRemove + 1);
}

void Scene::draw(SDL_Surface* surface)
{
    /*for(int i=0; i<length; i++){
        objectsList.at(i).draw(surface);
    }*/
    for(vector<GameObject*>::iterator it = objectsList.begin(); it != objectsList.end(); ++it)
    {
            (*it)->draw(surface);
    }
}
