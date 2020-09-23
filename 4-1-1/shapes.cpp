#include "shapes.h"
#define pi 3.14
#include <iostream>

Point::Point(int x, int y) : x(x), y(y) {}
Circle::Circle(int x, int y, int r) 
    :center(Point(x, y)), radius(r) {}
void Circle::printArea(){
    double area = pi * radius * radius;
    std::cout << "area: " << area << ", ";
}
void Circle::printPerimeter() {
    double peri = 2 * pi * radius;
    std::cout << "perimeter: " << peri << std::endl;
}
Rectangle::Rectangle(int x1, int y1, int x2, int y2)
    :top_left(Point(x1, y1)), bottom_right(Point(x2, y2)) {}
void Rectangle::printArea() {
    int area = (bottom_right.x - top_left.x) * (top_left.y - bottom_right.y);
    std::cout << "area: " << area << ", ";
}
void Rectangle::printPerimeter() {
    int peri = 2 * (bottom_right.x - top_left.x + top_left.y - bottom_right.y);
    std::cout << "perimeter: " << peri << std::endl;
}
