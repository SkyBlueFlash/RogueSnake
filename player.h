#ifndef SNAKE_H
#define SNAKE
#include <iostream>
#include <list>

using namespace std;

// a segment of the snake's body
struct Segment {
    bool state; // alive or dead (1 or 0)
};

class Snake {
public:
    Snake() {
        Segment s1;
        s1.state = false;
        body.push_back(s1);
    }
    list<Segment> body; // the snake's body
private:
    void move();
    void change_direc();
};

#endif