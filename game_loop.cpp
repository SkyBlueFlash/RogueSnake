#include "game_loop.h"

void main_loop() {
Snake snake1;
Render renderer; 

renderer.setup(renderer.mainwin);
    renderer.render(renderer.mainwin, snake1); 
    if (getch() == 'q') {
       endwin();
    }
}