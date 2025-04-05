#include <iostream>
#include <vector>
using namespace std;

class Polynomial{
    vector<int> coefficients;

    public:
    //default constructor
    Polynomial(){}
    //constructor
    Polynomial(vector<int> coefficients): coefficients(coefficients){}

    //Opereator Overloading
    Polynomial operator+(const Polynomial& p)
    {
        int size = max(coefficients.size(), p.coefficients.size())
        vector<int> result = {}
        return Polynomial()
    }
}