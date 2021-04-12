#include "game_loop.h"

void main_loop() {
Render renderer; 
renderer.setup(renderer.mainwin); // needs to be called before creating a Snake object
Snake snake1;
renderer.render(renderer.mainwin, snake1); 
    if (getch() == 'q') {
       endwin();
    }
}