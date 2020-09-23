struct Point{
    int x, y;
    Point(int, int);
};
class Circle{
private:
    Point center;
    int radius;
public:
    double area(int);
    double perimeter(int);
    Circle(Point, int);
    Circle(int, int, int);
    void printArea();
    void printPerimeter();
};
class Rectangle{
private:
    Point top_left, bottom_right;
public:
    int area(Point, Point);
    int perimeter(Point, Point);
    Rectangle(Point, Point);
    Rectangle(int, int, int, int);
    void printArea();
    void printPerimeter();
};

