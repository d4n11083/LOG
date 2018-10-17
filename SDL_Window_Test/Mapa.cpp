//
//  Mapa.cpp
//  SDL_Window_Test
//
//  Created by Josue Chaves on 10/16/18.
//  Copyright © 2018 Josue Chaves. All rights reserved.
//

#include "Mapa.h"

int nivel1[ALTOMAPAINT][ANCHOMAPAINT] = {
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};

Mapa::Mapa( ){
    
    tronco = TextureManager::loadTexture(PATHTRONCOTEXTURE1);
    roca = TextureManager::loadTexture(PATHROCATEXTURE1);
    hierba = TextureManager::loadTexture(PATHIERBATEXTURE1);
    
    cargarMapa(nivel1);
    
    src.x = src.y = 0;
    src.w = dest.w = ANCHOHIERBA;
    src.h = dest.h = ALTOHIERBA;
    dest.x = dest.y = 0;
    
}

void Mapa::cargarMapa(int arr[ALTOMAPAINT][ANCHOMAPAINT]){
    
    for( int row = 0; row < ALTOMAPAINT; row++ ){
        for(int column =0; column < ANCHOMAPAINT; column++ ){
            mapa[row][column] = arr[row][column];
        }
    }
                                    
    
}

void Mapa::dibujarMapa(){
    int tipo = 0;
    for( int row = 0; row < ALTOMAPAINT; row++ ){
        for(int column =0; column < ANCHOMAPAINT; column++ ){
            
            tipo = mapa[row][column];
            dest.x = column * ANCHOSOLDADO;
            dest.y = row * ALTOSOLDADO;
            
            switch (tipo) {
                case 0:
                    TextureManager::dibujar(hierba, src, dest);
                    break;
                case 1:
                    TextureManager::dibujar(roca, src, dest);
                    break;
                case 2:
                    TextureManager::dibujar(tronco, src, dest);
                    break;
                    
                default:
                    break;
            }
            

        }
    }
    
}
