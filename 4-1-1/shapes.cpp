#include "shapes.h"
#define pi 3.14
#include <iostream>

Circle::Circle(int x, int y, int r) {
    this -> x = x; 
    this -> y = y;
    this -> radius = r;
}
void Circle::printArea() {
    double area = pi * this -> radius * this -> radius;
    std::cout << "area: " << area << ", ";
}
void Circle::printPerimeter() {
    double peri = 2 * pi * this -> radius;
    std::cout << "perimeter: " << peri << "\n";
}

Rectangle::Rectangle(int x1, int y1, int x2, int y2) {
    this -> top_left_x = x1;
    this -> top_left_y = y1;
    this -> bottom_right_x = x2;
    this -> bottom_right_y = y2;
} 
void Rectangle::printArea() {
    int area = (this -> bottom_right_x - this -> top_left_x) * (this -> top_left_y - this -> bottom_right_y);
    std::cout << "area: " << area << ", ";
}
void Rectangle::printPerimeter() {
    int peri = 2 * (this -> bottom_right_x - this -> top_left_x + this -> top_left_y - this -> bottom_right_y);
    std::cout << "perimeter: " << peri << "\n";
}
