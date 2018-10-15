//
//  GameObject.cpp
//  SDL_Window_Test
//
//  Created by Josue Chaves on 10/14/18.
//  Copyright © 2018 Josue Chaves. All rights reserved.
//

#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject( const char* textureSheet, int x, int y){
    
    texObj = TextureManager::loadTexture(textureSheet);
    
    posX = x;
    posY = y;
    
}

void GameObject::Update(){
    
  
    posX++;
    posY++;
    srcRect.h = ALTOSOLDADO;
    srcRect.w = ANCHOSOLDADO;
    srcRect.x = 0;
    srcRect.y = 0;
    
    destRect.h = srcRect.h * 2;
    destRect.w = srcRect.w * 2;
    destRect.x = posX ;
    destRect.y = posY ;
}

void GameObject::Render(){
    SDL_RenderCopy(Game::renderer, texObj, &srcRect, &destRect);
    
}
