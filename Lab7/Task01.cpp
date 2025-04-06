#include <iostream>
#include <algorithm>
using namespace std;

class fraction {
    int numerator, denominator;

public:
    // Default constructor
    fraction() : numerator(0), denominator(1) {}

    // Parameterized constructor
    fraction(int num, int denom) {
        int gcd = __gcd(num, denom);
        num = num / gcd;
        denom = denom / gcd;
        if (denom < 0) {
            denominator = -denom;
            numerator = -num;
        } else {
            denominator = denom;
            numerator = num;
        }
    }

    // Arithmetic operators
    fraction operator+(const fraction& f2) {
        return fraction(numerator * f2.denominator + f2.numerator * denominator,
                        denominator * f2.denominator);
    }

    fraction operator-(const fraction& f2) {
        return fraction(numerator * f2.denominator - f2.numerator * denominator,
                        denominator * f2.denominator);
    }

    fraction operator*(const fraction& f2) {
        return fraction(numerator * f2.numerator, denominator * f2.denominator);
    }

    fraction operator/(const fraction& f2) 
	{
        return fraction(numerator * f2.denominator, denominator * f2.numerator);
    }

    // Comparison operators
    bool operator==(const fraction& f2) 
	{
        return numerator == f2.numerator && denominator == f2.denominator;
    }

    bool operator!=(const fraction& f2) 
	{
        return !(*this == f2);
    }

    bool operator<(const fraction& f2) 
	{
        return numerator * f2.denominator < f2.numerator * denominator;
    }

    bool operator>(const fraction& f2) 
	{
        return numerator * f2.denominator > f2.numerator * denominator;
    }

    bool operator<=(const fraction& f2) 
	{
        return !(*this > f2);
    }

    bool operator>=(const fraction& f2) 
	{
        return !(*this < f2);
    }


    friend ostream& operator<<(ostream& out, const fraction& f2){
        out << f2.numerator;
        if (f2.denominator != 1) {
            out << "/" << f2.denominator;
        }
        return out;
    }

    friend istream& operator>>(istream& is, fraction& f2){
        char symbol;
        is >> f2.numerator >> symbol >> f2.denominator;
        int gcd = __gcd(f2.numerator, f2.denominator);
        f2.numerator /= gcd;
        f2.denominator /= gcd;
        if (f2.denominator < 0) {
            f2.numerator = -f2.numerator;
            f2.denominator = -f2.denominator;
        }
        return is;
    }

    void display() {
        cout << numerator << endl;
        cout << denominator << endl;
    }
};

int main() 
{
    fraction f1, f2;
    cout << "Enter two fractions (a/b): ";
    cin >> f1 >> f2;

    cout << "\nSimplified Fraction 1: " << f1 << endl;
    cout << "Simplified Fraction 2: " << f2 << endl;

    cout << "\nArithmetic Operations : " << endl << endl;
    cout << f1 << " + " << f2 << " = " << (f1 + f2) << endl;
    cout << f1 << " - " << f2 << " = " << (f1 - f2) << endl;
    cout << f1 << " * " << f2 << " = " << (f1 * f2) << endl;
    cout << f1 << " / " << f2 << " = " << (f1 / f2) << endl;

    cout << "\nRelational Operators : " << endl << endl;
    cout << f1 << " == " << f2 << " ? " << (f1 == f2 ? "True" : "False") << endl;
    cout << f1 << " != " << f2 << " ? " << (f1 != f2 ? "True" : "False") << endl;
    cout << f1 << " < " << f2 << " ? " << (f1 < f2 ? "True" : "False") << endl;
    cout << f1 << " > " << f2 << " ? " << (f1 > f2 ? "True" : "False") << endl;
    cout << f1 << " <= " << f2 << " ? " << (f1 <= f2 ? "True" : "False") << endl;
    cout << f1 << " >= " << f2 << " ? " << (f1 >= f2 ? "True" : "False") << endl;

    return 0;
}
