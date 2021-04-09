#include <iostream>
#include <ncurses.h>

using namespace std;

int main() {
    initscr();
    raw();
    noecho();

    int row,col;
    getmaxyx(stdscr, row,col);
    mvprintw(row/2,col/2, "@");
    refresh();
    getch();
    endwin();
}