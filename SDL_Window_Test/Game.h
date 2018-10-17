//
//  Game.hpp
//  SDL_Window_Test
//
//  Created by Josue Chaves on 10/10/18.
//  Copyright © 2018 Josue Chaves. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include "SDL2/SDL.h"
#include "SDL2_image/SDL_image.h"
#include "TextureManager.h"
#include "DEFINITIONS.h"
#include "GameObject.h"
#include "Mapa.h"
#include <stdio.h>
#include <iostream>

/**
 * La clase principal del juego, desde acá se va a realizar toda la lógica del juego.
 **/
class Game{
public:
    
    Game();
    ~Game();
    
    /**
     *Inicializa la ventana de juego, con todos sus componentes.
     **/
    void init ( const char* titulo, int posX, int posY, int ancho, int alto, bool pantallacompleta );
    
    /**
     * Se encarga de manejar los eventos que ocurran desde los inputs
     **/
    void handleEvents( );
    
    /**
     * Actualiza los componentes del juego.
     **/
    void update( );
    
    /**
     * Renderiza los componentes del juego en pantalla
     **/
    void render( );
    
    /**
     * Limpia todos los componentes de la pantalla
     **/
    void clean( );
    
    /**
     * Booleano que nos dice si el juego se está ejecutando o no.
     **/
    bool running( ){ return isRunning; };
    
    static SDL_Renderer *renderer;
    
private:
    
    int contador = 0;
    bool isRunning = false;
    SDL_Window *window;    
};




#endif /* Game_hpp */
