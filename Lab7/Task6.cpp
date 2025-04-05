#include <iostream>
using namespace std;

class Person{
    protected:
    int empID;

    public:
    Person(){}

    Person(int empID): empID(empID){}

    virtual void getdata()
    {
        cout<<"Enter Employee ID: ";
        cin>>empID;
    }

    virtual void displaydata()
    {
        cout<<"Employee ID: "<<empID<<endl;
    }
};

class Admin: public Person{
    string name;
    int income;
    double bonus;

    public:
    Admin(){}

    Admin(int empID, string name, int income): Person(empID), name(name), income(income){
        bonus = income * 0.05 * 12;
    }

    void getdata() override
    {
        cout<<"Enter Employee ID: ";
        cin>>empID;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter income: ";
        cin>>income;
    }

    void displaydata() override
    {
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Income: "<<income<<endl;
        cout<<"Bonus: "<<bonus<<endl;
    }
};

class Account: public Person{
    string name;
    int income;
    double bonus;

    public:
    Account(){}

    Account(int empID, string name, int income): Person(empID), name(name), income(income){
        bonus = income * 0.05 * 12; 
    }

    void getdata() override
    {
        cout<<"Enter Employee ID: ";
        cin>>empID;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter income: ";
        cin>>income;
    }

    void displaydata() override
    {
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Income: "<<income<<endl;
        cout<<"Bonus: "<<bonus<<endl;
    }
};

int main()
{
    Account acc1;
    acc1.getdata();
    Admin adm1;
    adm1.getdata();
    adm1.displaydata();
    acc1.displaydata();
}