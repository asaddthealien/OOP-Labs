#include <iostream>
#include <string>
using namespace std;

class Account{
	int balance;
	
	public:
		void setbalance(int bal)
		{
			balance = bal;
		}
		
		void credit(int amount)
		{
			balance+=amount;
			cout<<"Salary agayiiiii"<<endl;
		}
		
		void debit(int amount)
		{
			if(amount>balance)
			{
				cout<<"Error: Gareebi"<<endl;
			}
			else
			{
				balance -= amount;
				cout<<"sab le jao"<<endl;
			}
		}
		
		void balancecheck()
		{
			cout<<"Balance: "<<balance<<endl;
		}
};

int main()
{
	Account acc1;
	cout<<"Enter your initial Balance: ";
	int bal;
	cin>>bal;
	acc1.setbalance(bal);
	while(1)
	{
		cout<<"********************************"<<endl;
		cout<<"1.Credit"<<endl;
		cout<<"2.Withdraw"<<endl;
		cout<<"3.Check Balance"<<endl;
		cout<<"4.Exit"<<endl;
		int choice;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:{
				cout<<"Enter Amount: ";
				int x;
				cin>>x;
				acc1.credit(x);
				break;
			}
			case 2:{
				cout<<"Enter Amount: ";
				int x;
				cin>>x;
				acc1.debit(x);
				break;
			}
			case 3:{
				acc1.balancecheck();
				break;
			}
			case 4:{
				exit(1);
				break;
			}	
    	}
    }
}