#include <iostream>
#include <string>
using namespace std;

class Invoice{
	string number;
	string description;
	int quantity;
	double price;
	
	public:
		Invoice(string number, string description, int quantity, double price){
			this->number =number;
			this->description = description;
			this->quantity = quantity;
			this->price = price;
		}
		void getinvoiceamount()
		{
			if(quantity < 0)
			{
				quantity = 0;
			}
			if(price < 0.0)
			{
				price = 0.0;
			}
			
			cout<<"Invoice: "<<quantity*price<<endl;
		}
};

int main(int argc, char *argv[])
{
	Invoice bill(argv[1], argv[2], stoi(argv[3]), stod(argv[4]));
	bill.getinvoiceamount();
}