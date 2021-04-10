#include "render.h"

// called at the start of the game to initialise the main screen
void Render::setup() {
    // initialize screen for ncurses
    initscr(); 
    // disable input buffer so we can get the input directly instead of waiting for the user to press Enter
    cbreak();
    // disable input echo so the input won't be printed on screen
    noecho();

    // enable keys like Fn, and arrow keys
    keypad(stdscr, TRUE);
    refresh();
/*--------------------------------------------------------------------------*/
    // max number of rows
    int m_rows;
    // max number of colomons
    int m_cols;
    // get the number of rows and cols in the terminal
    getmaxyx(stdscr,m_rows, m_cols);    
/*---------------------------------------------------------------------------*/
    // create a window that is m_rows-1 high (subtracted the one since we start at +1 position rather than 0)
    // and m_cols wide at 1 (y) and 1 (x)
    // draw a box around the window which we use as border

    // the main window of the game
    WINDOW *mainwin = newwin(m_rows-1,m_cols-1,1, 1);
    box(mainwin, '|', '=');
/*---------------------------------------------------------------------------*/
    // draw changes to the window
    wrefresh(mainwin);
}