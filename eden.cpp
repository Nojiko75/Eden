#include "eden.hpp"
#include "Rectangle.hpp"
#include "image.hpp"

Eden::Eden(){
    name = "Eden Eternal";
    width = 600;
    height = 600;
    init();
}

Eden::Eden(std::string _name, int _width, int _height){
    name = _name;
    if(_width > 0){
        width = _width;
    } else {
        width = 300;
    }

    if(_height > 0){
        height = _height;
    } else {
        height = 500;
    }
    init();
}

/*lib�re la SDL de la m�moire*/
Eden::~Eden(){
    SDL_Quit();
}

/*charge la SDL en m�moire*/
void Eden::init()
{
    m_running = false;
    /*charge tous les composants de la SDL: audio, vid�o, ...*/
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        /*affiche l'erreur dans un fichier*/
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
        exit(EXIT_FAILURE); /*quitte le programme*/
    }

    /** initialise le mode vid�o avec:
      * width: la largeur
      * height: la hauteur
      * 32: le nb de couleurs de la fen�tre en bits (nb maximal)
      * SDL_HWSURFACE: charge les donn�es dans la carte graphique
      * SDL_DOUBLEBUF: rend les d�placements � l'�cran plus fluide
      */

    m_buffer = SDL_SetVideoMode(width, height, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    char* charName= new char [name.length()-1];
    strcpy(charName,name.c_str());
    SDL_WM_SetCaption(charName, NULL);  /*titre de la fen�tre*/
    format = m_buffer->format;

}

void Eden::run()
{
    m_running = true;
    while(m_running)
    {
        /** G�rer les �v�nements */
        SDL_PollEvent(&m_event);

        /** Effacement �cran */
        //SDL_

        /** Dessiner �l�ments */
        //Rectangle rect("Rect", 50, 50, 100, 150, SDL_MapRGB(m_buffer->format, 0xff, 0xff, 0x00), false);
        /*Color color(255, 255, 0);
        Position p(50,50);
        Rectangle rect("Rect", p, 100, 150, color, false);
        Image img("shin.png", p);
        img.draw(m_buffer);
        SDL_Flip(m_buffer);*/
        //scene.add(&rect);
        //std::cout << scene.getLength() << std::endl;
        //rect.draw(m_buffer);
        /** Passer � la frame suivante */
        //SDL_Flip(m_buffer);
    }
}

void Eden::clear()
{
    m_running = false;
}

