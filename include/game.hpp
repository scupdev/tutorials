#pragma once

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

enum class GameState {PLAY, EXIT};

class Game {
    public:
        Game(const char* title, int x, int y, int w, int h, Uint32 flags);
        GameState gameState;
        SDL_Texture* loadTexture(const char* filePath);
        void render(SDL_Texture* tex);
        void run();
        
    private:
        void clear();
        void display();
        void cleanUp();
        SDL_Window* window;
        SDL_Renderer* renderer;
};