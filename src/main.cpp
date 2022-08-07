#include <game.hpp>

int main(int argc, char* argv[]) {

	int _screenWidth = 1024;
	int _screenHeight = 600;

    Game game("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_SHOWN);

    SDL_Texture* frog = game.loadTexture("res/gfx/frog_lg.png");

    while (game.gameState != GameState::EXIT) {
    	SDL_Event event;
    	SDL_PollEvent(&event);

    	switch (event.type) {
    		case SDL_QUIT:
    			game.gameState = GameState::EXIT;
    			break;
    	}

    	game.render(frog);
    	game.run();
    }

    return 0;
}