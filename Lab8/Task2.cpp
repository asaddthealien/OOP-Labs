#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    protected:
    string position, color;

    public:
    Shape(string p, string s): position(p), color(s){}

    virtual void draw()
    {
        cout<<"Drawing a shape at "<<position<<endl;
    }

    virtual void calcarea()
    {
        cout<<"not enough data"<<endl;
    }

    virtual void calcperimeter()
    {
        cout<<"not enough data"<<endl;
    }
};

class Rectangle: public Shape{
    int length,width;

    public:
    Rectangle(string p, string s, int l, int w): Shape(p, s), length(l), width(w){}

    void draw() override
    {
        cout<<"Drawing a rectangle at "<<position<<endl;
    }

    void calcarea() override
    {
        cout<<"Area = "<<length*width<<endl;
    }

    void calcperimeter() override
    {
        cout<<"Perimeter = "<<2*(length+width)<<endl;
    }
};

class Triangle: public Shape{
    int base, height, perpendicular;

    public:
    Triangle(string p, string s, int b, int h, int perp): Shape(p, s), base(b), height(h), perpendicular(perp){}

    void calcarea() override
    {
        cout<<"Area = "<<0.5*base*height<<endl;
    }

    void calcperimeter() override
    {
        cout<<"Perimeter = "<<base+height+perpendicular<<endl;
    }

    void draw() override
    {
        cout<<"Drawing a triangle at "<<position<<endl;
    }
};

class Circle: public Shape{
    int radius;

    public:
    Circle(string p, string s, int r): Shape(p, s), radius(r){}

    void calcarea() override
    {
        cout<<"Area = "<<3.142 * radius * radius<<endl;
    }

    void calcperimeter() override
    {
        cout<<"Perimeter = "<<2*3.142*radius<<endl;
    }

    void draw() override
    {
        cout<<"Drawing a circle at "<<position<<endl;
    }
};

class Polygon: public Shape {
    int sides;
    int length;

public:
    Polygon(string p, string s, int sides, int l) : Shape(p, s), sides(sides), length(l) {}

    void calcarea() override 
    {
        double area = (sides * length * length) / (4 * tan(3.142 / sides));
        cout << "Area = " << area << endl;
    }

    void calcperimeter() override {
        cout << "Perimeter = " << sides * length << endl;
    }

    void draw() override {
        cout << "Drawing a polygon with " << sides << " sides at " << position << endl;
    }
};

int main()
{
    Rectangle r1("xy-plane", "blue", 10, 10);
    r1.draw();
    r1.calcarea();
    r1.calcperimeter();

    Triangle t1("xy-plane", "blue", 10, 10, 20);
    t1.draw();
    t1.calcarea();
    t1.calcperimeter();

    Circle c1("xy-plane", "blue", 5);
    c1.draw();
    c1.calcarea();
    c1.calcperimeter();

    Polygon p1("xy-plane", "blue", 6, 5);
    p1.draw();
    p1.calcarea();
    p1.calcperimeter();

    return 0;
}