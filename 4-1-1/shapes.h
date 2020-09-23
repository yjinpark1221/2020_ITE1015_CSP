class Circle{
private:
    int x, y;
    int radius;
public:
    Circle(int, int, int);
    void printArea();
    void printPerimeter();
};
class Rectangle{
private:
    int top_left_x, top_left_y, bottom_right_x, bottom_right_y;
public:
    Rectangle(int, int, int, int);
    void printArea();
    void printPerimeter();
};

