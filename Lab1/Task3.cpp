#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int id = stoi(argv[1]);
	string name = argv[2];
	int units = stoi(argv[3]);
	
	cout<<"Customer Name: "<<name<<endl;
	cout<<"Customer ID: "<<id<<endl;
	float bill = 0;
	if(units <= 199)
	{
		bill = units * 16.20;
		cout<<"Amount charge @16.20 per unit "<< bill<<endl;
	}
	else if(units >= 200 && units <= 299)
	{
		bill = units * 20.10;
		cout<<"Amount charge @20.10 per unit "<< bill<<endl;
	}
	else if(units >= 300 && units <= 499)
	{
		bill = units * 27.10;
		cout<<"Amount charge @27.10 per unit "<< bill<<endl;
	}
	else if(units >= 500)
	{
		bill = units *35.90;
		cout<<"Amount charge @35.90 per unit "<< bill<<endl;
	}
	float surcharge = 0;
	if(bill > 18000)
	{
		surcharge = bill * 0.15;
		bill += surcharge;
	}
	cout<<"Surcharge: "<<surcharge<<endl;
	cout<<"Bill: "<<bill<<endl;
}