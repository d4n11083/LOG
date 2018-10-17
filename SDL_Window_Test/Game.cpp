//
//  Game.cpp
//  SDL_Window_Test
//
//  Created by Josue Chaves on 10/10/18.
//  Copyright © 2018 Josue Chaves. All rights reserved.
//

#include "Game.h"




Game::Game( ){
    
}

Game::~Game(){
    
}

GameObject *soldado;
GameObject *enemigo;
Mapa* mapa;


SDL_Renderer *Game::renderer = nullptr;

//Inicializa la ventana
void Game::init(const char *titulo, int posX, int posY, int ancho, int alto, bool pantallacompleta){
    int flags = 0;
    if(pantallacompleta){
        flags = SDL_WINDOW_FULLSCREEN;
    }
    
    if( SDL_Init(SDL_INIT_EVERYTHING) == 0 ){
        std::cout << "Subsistemas inicializados" << std::endl;
        
        //Creando la Ventana
        window = SDL_CreateWindow( titulo, posX , posY, ancho, alto, flags);
        
        //Creando el renderizador
        renderer = SDL_CreateRenderer( window, -1, 0);
        
        //Si no hay problema creando el renderer, se pinta el color blanco en pantalla
        if(renderer){
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        }
        isRunning = true;
    }

    //Se carga la textura del soldado
    soldado = new GameObject(PATHSOLDADOTEXTURE1, 0, 0);
    
    //Se carga la textura del enemigo
    enemigo = new GameObject(PATHENEMIGOTEXTURE1, 50, 50);
    
    //Se carga el mapa
    mapa = new Mapa();
}

void Game::handleEvents() {
    
    SDL_Event event;
    SDL_PollEvent(&event);
    
    switch( event.type ){
            //Cuando se presiona el botón para salir de la ventana, como lo es en un app normal.
        case SDL_QUIT:{
            isRunning = false;
            break;
        }
        default:{
            break;
        }
            
    }
    
}

void Game::update(){
    
    soldado->Update();
    enemigo->Update();
    
}

void Game::render(){
    
    SDL_RenderClear( renderer );
    //Acá se renderiza todo.
    
    mapa->dibujarMapa();
    
    soldado->Render();
    
    enemigo->Render();
    
    SDL_RenderPresent( renderer );
    
}

void Game::clean( ){
    SDL_DestroyWindow( window );
    SDL_DestroyRenderer( renderer );
    SDL_QUIT;

    std::cout << "Game Cleaned" << std::endl;
}


