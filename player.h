#ifndef SNAKE_H
#define SNAKE
#include <iostream>
#include <list>
#include <ncurses.h>
using namespace std;

// a segment of the snake's body
struct Segment {
    bool state; // alive or dead (1 or 0)
    int y_x_pos[2];
    char direction;
};

class Snake {
public:
    Snake() {
        Segment s1;
        s1.state = true;
        s1.direction = NULL; // the snake starts without a specific direction to move to
        //-----------------------------------------------------------------------------
        // I am not very happy about the implementaion here, this block basicly gets the
        // max rows and colomns of the screen, devides them by 2 (to find the middle of the screen)
        // and assigns their value to the snake's x and y position.
        // the problem here is that the a snake object MUST be initialised after calling Render::render
        // (see how they are called in game_loop.cpp)
        // so it can find a screen to get its max rows and cols, else the max rows and cols defaults to 0.
        // there is propably a better way of doing this, but untill I (or someone) finds it, this will do.
        int max_row,max_col;
        getmaxyx(stdscr,max_row,max_col);
        s1.y_x_pos[0] = max_row;
        s1.y_x_pos[1] = max_col;
        //-----------------------------------------------------------------------------
        body.push_back(s1);
    }
    list<Segment> body; // the snake's body
private:
    void move();
    void change_direc(char direction);
};

#endif