#include <iostream>
#include <vector>
#include "shape.h"

std::vector <Shape*> arr;
int main() {
    char q;
    double w, h;
    while (std::cin >> q && q != '0') {
        std::cin >> w >> h;
        if (q == 'r') {
            Shape* rectangle = new Rectangle(w, h);
            arr.push_back(rectangle);
        }
        else {
            Shape* triangle = new Triangle(w, h);
            arr.push_back(triangle);
        }
    }
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << (*it)->getArea() << "\n";
        delete (*it);
    }
    return 0;
}
