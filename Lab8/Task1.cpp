#include <iostream>
#include <vector>
using namespace std;

class Account {
protected:
    int accountNumber;
    float balance;
    string accountHolderName;
    vector<pair<float, float>> transactions;

public:
    Account(int a, float b, string h) : accountNumber(a), balance(b), accountHolderName(h) {}

    void deposit(float b) {
        balance += b;
        cout << "\nAmount Deposited";
    }

    virtual void withdraw(float b) {
        if (balance < b) {
            cout << "\nInsufficient Balance";
        } else {
            balance -= b;
            transactions.push_back({b, balance});
            cout << "\nAmount Withdrawn";
        }
    }

    virtual void printStatement() {
        cout << "\nTransaction History:";
        for (auto& t : transactions) {
            cout << "\nWithdrawn: " << t.first << " | Balance: " << t.second;
        }
    }

    virtual void accountInfo() {
        cout << "\nAccount Number: " << accountNumber
             << "\nBalance: " << balance
             << "\nName: " << accountHolderName;
    }

    virtual void calculateInterest() {}
};

class SavingAccount : public Account {
    float interestRate;
    float minimumBalance;

public:
    SavingAccount(int a, float b, string h, float i, float m)
        : Account(a, b, h), interestRate(i), minimumBalance(m) {}

    void withdraw(float b) override {
        if (balance < b) {
            cout << "\nInsufficient Balance";
        } else if (balance - b < minimumBalance) {
            cout << "\nWithdraw violates minimum balance requirement";
        } else {
            balance -= b;
            transactions.push_back({b, balance});
            cout << "\nAmount Withdrawn";
        }
    }

    void calculateInterest() override {
        deposit(balance * interestRate / 100);
    }

    void printStatement() override {
        cout << "\nAccount Type: Saving Account"
             << "\nInterest Rate: " << interestRate
             << "\nMinimum Balance: " << minimumBalance;
        Account::printStatement();
    }
};

class FixedDepositAccount : public Account {
    float fixedInterestRate;
    string maturityDate;

public:
    FixedDepositAccount(int a, float b, string h, float r, string m)
        : Account(a, b, h), fixedInterestRate(r), maturityDate(m) {}

    void calculateInterest() override {
        deposit(balance * fixedInterestRate / 100);
    }

    void printStatement() override {
        cout << "\nAccount Type: Fixed Deposit Account"
             << "\nFixed Interest Rate: " << fixedInterestRate
             << "\nMaturity Date: " << maturityDate;
        Account::printStatement();
    }
};

int main() {
    SavingAccount sa(101, 5000, "Saleem Shady", 5.0, 1000);
    FixedDepositAccount fda(102, 10000, "Basheeeeeeeeeer", 7.5, "31-12-2025");
    sa.deposit(2000);
    sa.withdraw(1500);
    sa.calculateInterest();
    sa.printStatement();
    sa.accountInfo();
    fda.calculateInterest();
    fda.printStatement();
    fda.accountInfo();

    return 0;
}
