//
//  TextureManager.h
//  SDL_Window_Test
//
//  Created by Josue Chaves on 10/14/18.
//  Copyright © 2018 Josue Chaves. All rights reserved.
//

#ifndef TextureManager_h
#define TextureManager_h

#include "Game.h"

/**
 *Carga las texturas en el renderer, utilizando el path
 **/
class TextureManager{
public:
    static SDL_Texture* loadTexture(const char* fileName);
    
};


#endif /* TextureManager_h */
