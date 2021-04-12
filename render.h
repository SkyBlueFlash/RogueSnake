#ifndef RNDR_H
#define RNDR_H
#include "player.h"

class Render {
private:
    int height, width;
public:
    WINDOW* mainwin;
    void setup(WINDOW *win);
    void render(WINDOW *win, const Snake &s);
};

#endif