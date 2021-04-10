#include "render.h"

using namespace std;

int main() {
   Render::setup();
   if (getch() == 'q') {
       endwin();
   }
}