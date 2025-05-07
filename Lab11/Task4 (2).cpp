#include <bits/stdc++.h>
using namespace std;

template <typename T>
class base{
    protected:
    T var1;
    T var2;

    public:
    base(T var1, T var2): var1(var1), var2(var2){}

    virtual void multiply()
    {
        cout<<"Product of base: "<<var1*var2<<endl;
    }

};

template <typename T>
class derived: public base<T>{
    T var3;
    T var4;

    public:
    derived(T var1, T var2, T var3, T var4): base<T>(var1, var2), var3(var3), var4(var4){}

    void multiply() override {
        cout<<"Product of base: "<<base<T>::var1* base<T>::var2<<endl;
        cout<<"Product of derived: "<<var3*var4<<endl;
    }
};

int main()
{
    base<int> b1(2, 4);
    derived<int> d1(2, 4, 1, 3);
    d1.multiply();
}

