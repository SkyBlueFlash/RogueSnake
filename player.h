#ifndef SNAKE_H
#define SNAKE
#include <iostream>
#include <list>

using namespace std;

// a segment of the snake's body
struct Segment {
    int state; // alive or dead (1 or 0)
} segment;

class Snake {
private:
    list<struct Segment> body; // the snake's body
    void move();
    void change_direc();
};

#endif