#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Glass{
	public:
		int liquidlevel = 200;
		
		void Refill()
		{
			liquidlevel = 200;
		}
		void Drink(int liquidlevel)
		{
			if(liquidlevel < 100)
			{
				Refill();
			}
		}		
};

int main()
{
	Glass glass1;
	while(1)
	{
		int choice;
		cout<<"1. Drink"<<endl;
		cout<<"2. Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:{
				int water;
				cout<<"Enter the amount of water you want to drink (1-200): ";
				cin>>water;
				glass1.liquidlevel -= water;
				glass1.Drink(glass1.liquidlevel);
				cout<<"Water left: "<<glass1.liquidlevel<<endl;
				break;
			}
			case 2:
				{
					exit(1);
				}
		}
		
	}
}