#include "shapes.h"
#include <iostream>
    
int main() {
    char command;
    while (1) {
        std::cout << "shape?"<< std::endl;
        std::cin >> command;
        if (command == 'Q') break;
        if (command == 'C') {
            int cx, cy, r;
            std::cin >> cx >> cy >> r;
            Circle c(cx, cy, r);
            c.printArea();
            c.printPerimeter();
        }
        if (command == 'R') {
            int x1, y1, x2, y2;
            std::cin >> x1 >> y1 >> x2 >> y2;
            Rectangle r(x1, y1, x2, y2);
            r.printArea();
            r.printPerimeter();
        }
    }
    return 0;
}

