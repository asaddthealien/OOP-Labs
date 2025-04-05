#include <iostream>
using namespace std;

class number{
    int num;

    public:
    number(int x): num(x){}

    void operator--()
    {
        num = num*4;
    }

    void operator--(int)
    {
        num = num/4;
    }

    void print()
    {
        cout<<num<<endl;
    }

};

int main()
{
    number n1(16);
    n1--;
    n1.print();
    --n1;
    n1.print();
}