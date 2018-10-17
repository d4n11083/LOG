//
//  GameObject.hpp
//  SDL_Window_Test
//
//  Created by Josue Chaves on 10/14/18.
//  Copyright © 2018 Josue Chaves. All rights reserved.
//

#ifndef GameObject_hpp
#define GameObject_hpp
#include <stdio.h>
#include "Game.h"

class GameObject{
public:
    
    GameObject( const char* textureSheet, int x, int y);
    ~GameObject();
    
    void Update();
    void Render();
    
    
private:
    
    int posX;
    int posY;
    SDL_Texture* texObj;
    SDL_Rect srcRect, destRect;
    
    
};

#endif /* GameObject_hpp */
