#ifndef __SHAPES_H__
#define __SHAPES_H__

class Shape {
protected:
    double width;
    double height;
public:
    Shape();
    Shape(double, double);
    virtual ~Shape();
    virtual double getArea() const = 0;
};
class Rectangle : public Shape {
private: 
public:
    Rectangle(double, double);
    ~Rectangle();
    virtual double getArea() const;
};
class Triangle : public Shape {
private:
public:
    Triangle(double, double);
    ~Triangle();
    virtual double getArea() const;
};

#endif
