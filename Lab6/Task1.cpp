#include <iostream>
#include <string>
using namespace std;

class BankAccount{
protected:
    string accno;
    int balance;
public:
    BankAccount(string acc, int bal) : accno(acc), balance(bal) {}
    virtual void deposit(int amount) 
    { 
        balance += amount; cout << "Deposited" << endl; 
    }
    virtual void withdraw(int amount) 
    {
        if(amount < balance) { balance -= amount; cout << "Withdrawn" << endl; }
        else { cout << "Not enough Money" << endl; }
    }
    virtual ~BankAccount() {}
};

class SavingAccount : public BankAccount{
    float mintrest;
public:
    SavingAccount(string acc, int bal) : BankAccount(acc, bal) {}
    void intrest()
     { 
        mintrest = balance * 0.2; cout << "Interest Applied " << mintrest << endl; 
    }
};

class CheckingAccount : public BankAccount{
    int overdraftlim;
public:
    CheckingAccount(string acc, int bal, int x) : BankAccount(acc, bal), overdraftlim(x) {}
    void withdraw(int amount) {
        if(amount < balance) { balance -= amount; cout << "Withdrawn" << endl; }
        else if(amount > balance && (amount - balance) < overdraftlim) 
        {
            cout << "Overdraft Limit Applied" << endl; balance -= amount;
        }
        else 
        { 
            cout << "Overdraft limit exceeded" << endl; 
        }
    }
};

class BusinessAccount : public BankAccount{
    int tax;
public:
    BusinessAccount(string acc, int bal, int x) : BankAccount(acc, bal), tax(x) {}
    void deposit(int amount) 
    { 
        balance += amount - tax; cout << "Deposited with tax applied" << endl; 
    }
    void withdraw(int amount) 
    {
        if(amount < balance) 
        {
            balance -= (amount + tax); cout << "Withdrawn with tax applied" << endl;
        }
        else { cout << "Not enough Money" << endl; }
    }
};

class Employee {
protected:
    string empID;
public:
    Employee(string id) : empID(id) {}
    virtual void performOperation(BankAccount* acc, int amount) = 0;
};

class Customer : public Employee{
public:
    Customer(string id) : Employee(id) {}
    void performOperation(BankAccount* acc, int amount) 
    { 
        acc->deposit(amount); 
    }
};

class Teller : public Employee{
public:
    Teller(string id) : Employee(id) {}
    void performOperation(BankAccount* acc, int amount) 
    { 
        acc->withdraw(amount); 
    }
};

class Manager : public Employee{
public:
    Manager(string id) : Employee(id) {}
    void performOperation(BankAccount* acc, int amount) 
    { 
        acc->deposit(amount); acc->withdraw(amount); 
    }
};

int main() {
    SavingAccount sa("S001", 5000);
    CheckingAccount ca("C001", 3000, 1000);
    BusinessAccount ba("B001", 10000, 500);
    
    sa.deposit(1000);
    sa.withdraw(2000);
    
    ca.deposit(1000);
    ca.withdraw(2000);
    
    ba.deposit(1000);
    ba.withdraw(2000);
    
    return 0;
}
