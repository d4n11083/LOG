//
//  Mapa.hpp
//  SDL_Window_Test
//
//  Created by Josue Chaves on 10/16/18.
//  Copyright © 2018 Josue Chaves. All rights reserved.
//

#ifndef Mapa_hpp
#define Mapa_hpp

#include <stdio.h>
#include "TextureManager.h"
#include "Game.h"

class Mapa{
public:
    
    Mapa( );
    ~Mapa( );
    
    void cargarMapa(int arr[ALTOMAPAINT][ANCHOMAPAINT] );
    void dibujarMapa( );
                                         
    
private:
    
    SDL_Rect src, dest;
    
    SDL_Texture* roca;
    SDL_Texture* hierba;
    SDL_Texture* tronco;

    int mapa[ANCHOMAPAINT][ALTOMAPAINT];
    
    

};

#endif /* Mapa_hpp */
