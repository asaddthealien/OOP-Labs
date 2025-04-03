#include <iostream>
using namespace std;

class Currency{
    protected:
    int amount;
    char currsymbol;
    string currcode;
    double exchangerate;

    public:
    Currency(int a, char cs, string cc, double exrate): amount(a), currsymbol(cs), currcode(cc), exchangerate(exrate){}

    virtual void converttobase() = 0;

    void convertto(Currency& targetcurr)
    {
        cout<<"Converted Currenncy = "<< (amount*exchangerate)/targetcurr.exchangerate<<endl;
    }

    virtual void displaycurr()
    {
        cout<<"Symbol: "<<currsymbol<<endl;
        cout<<"Code: "<<currcode<<endl;
        cout<<"Exchange Rate: "<<exchangerate<<endl;
    }

};

// Assuming USD as base currency with rate 1
class Dollar: public Currency{
    public:
    Dollar(int a): Currency(a, 'S', "usd", 1){}

    void converttobase() override{
        cout<<"USD is already in base class"<<endl;
    }

    void displaycurr() override
    {
        cout<<"Dollar currency details"<<endl;
        cout<<"Symbol: "<<currsymbol<<endl;
        cout<<"Code: "<<currcode<<endl;
        cout<<"Exchange Rate: "<<exchangerate<<endl;
    }

};

class Euro: public Currency{
    public:
    Euro(int a): Currency(a, 'E', "eur", 0.85){}

    void converttobase() override{
        amount = amount*exchangerate;
        cout<<"Amount after converting to base: "<<amount<<endl;
    }

    void displaycurr() override
    {
        cout<<"EURO currency details"<<endl;
        cout<<"Symbol: "<<currsymbol<<endl;
        cout<<"Code: "<<currcode<<endl;
        cout<<"Exchange Rate: "<<exchangerate<<endl;
    }
};

class Ruppee: public Currency{
    public:
    Ruppee(int a): Currency(a, 'R', "pkr", 280.0){}

    void converttobase() override{
        amount = amount*exchangerate;
        cout<<"Amount after converting to base: "<<amount<<endl;
    }

    void displaycurr() override
    {
        cout<<"Ruppee currency details"<<endl;
        cout<<"Symbol: "<<currsymbol<<endl;
        cout<<"Code: "<<currcode<<endl;
        cout<<"Exchange Rate: "<<exchangerate<<endl;
    }
};

int main()
{
    Dollar usd(100);  // 100 USD
    Euro eur(50);     // 50 EUR
    Ruppee inr(50);  // 5000 INR

    // Display original values
    cout << endl << "Original Currency Amounts:" << endl;
    usd.displaycurr();
    eur.displaycurr();
    inr.displaycurr();

    // Convert and display results
    cout << endl << "Conversions:" << endl;
    cout << "100 USD to EUR: " <<endl;
    usd.convertto(eur);

    cout << "50 EUR to USD: "<< endl;
    eur.convertto(usd);
    
    cout << "50 PKR to USD: "<< endl;
    inr.convertto(usd);

}