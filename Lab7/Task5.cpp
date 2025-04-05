#include <iostream>
using namespace std;

class Shape{
    int length, width, area;

    public:
    Shape(int l, int w): length(l), width(w){}

    //another constructor so it can work if we only provide the area

    Shape(int a): length(0), width(), area(a){}

    void calcarea()
    {
        area = length * width;
    }

    Shape operator+(const Shape& shape1)
    {
        return Shape(area + shape1.area);
    }

    void print()
    {
        cout<<area<<endl;
    }
};

int main()
{
    Shape shape1(4, 4);
    shape1.calcarea();
    Shape shape2(3, 3);
    shape2.calcarea();
    Shape shape3 = shape1+shape2;
    shape3.print();
    return 0;
}