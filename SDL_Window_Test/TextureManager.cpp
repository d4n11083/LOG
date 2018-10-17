//
//  TextureManager.cpp
//  SDL_Window_Test
//
//  Created by Josue Chaves on 10/14/18.
//  Copyright © 2018 Josue Chaves. All rights reserved.
//

#include <stdio.h>
#include "TextureManager.h"


SDL_Texture* TextureManager::loadTexture(const char *fileName){
    SDL_Surface* superficieTemp = IMG_Load(fileName);                            //Crea una superficie temporal
    SDL_Texture* textura = SDL_CreateTextureFromSurface(Game::renderer, superficieTemp);    //Carga la imagen en esa superficie, le pasamos el renderer statico, para no hacer tantas referencias. 
    SDL_FreeSurface(superficieTemp);                                             //Libera la superficie temporal
    
    
    return textura;                                                               //Retorna la textura 
}


void TextureManager::dibujar(SDL_Texture *tex, SDL_Rect src, SDL_Rect dest){
    
    SDL_RenderCopy(Game::renderer, tex, &src, &dest);
    
}

