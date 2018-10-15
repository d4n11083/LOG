
#include "SDL2/sdl.h"
#include "iostream"
#include "Game.h"

Game *game = nullptr;


int main(int args, const char * argv[]){
    
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;
    Uint32 frameStart;
    int frameTime;
    
    
    game = new Game();
    game->init("Prueba", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ANCHOPANTALLA, ALTOPANTALLA, false);
    while( game->running() ){
        
        frameStart = SDL_GetTicks();
        
        game->handleEvents();
        game->update();
        game->render();
        
        frameTime = SDL_GetTicks() - frameStart;
        
        if (frameDelay > frameTime){
            SDL_Delay(frameDelay - frameTime);
        }
        
    }
    
    game->clean();
    
    return 0;
}
