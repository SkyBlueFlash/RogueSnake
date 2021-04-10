#ifndef RNDR_H
#define RNDR_H
#include <iostream>
#include <ncurses.h>

class Render {
private:
    int height, width;
public:
    static void setup();
    void render();
};

#endif