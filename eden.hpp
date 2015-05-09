#ifndef EDEN_HPP
#define EDEN_HPP

#include <iostream>
#include <SDL/SDL.h>

class Eden{
    private:
        char* name;
        int width;
        int height;

        SDL_Surface* m_buffer;
        SDL_Event m_event;

        bool m_running;

    public:
        Eden();
        Eden(char* _name, int _width, int _height);
        ~Eden();

        void init();
        void run();
        void clear();

        //inline => #define dans .cpp
        inline char* getName(){ return name; }
        inline void setName(char* _name){ name = _name; }
        inline int getWidth() { return width; }
        inline void setWidth(int _width) { width = _width; }
        inline int getHeight() { return height; }
        inline void setHeight(int _height) { height = _height; }
};

#endif // EDEN_HPP

