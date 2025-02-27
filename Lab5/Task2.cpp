#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Car{
	string name;
	string ID;
	public:
		Car(string name, string ID)
		{
			this->name = name;
			this->ID = ID;
		}
		string getname()
		{
			return name;
		}
		string getID()
		{
			return ID;
		}
	
	void printdetails()
	{
		cout<<getname()<<endl;
		cout<<getID()<<endl;
		
	}	
	
	~Car(){
		cout<<"Car Destroyed"<<endl;
	}
};
class Garage{
	vector<Car*> cars; 
	
	public:
		void parkcar(Car* car)
		{
			cars.push_back(car);
		}
		void listcar()
		{
			for(int i = 0; i < cars.size(); i++)
			{
				cout<<cars[i]->getname()<<endl;
				cout<<cars[i]->getID()<<endl;
			}
		}
		~Garage(){
			cout<<"Garage Destroyed"<<endl;
		}
		
};

int main()
{
	Car c1("FX", "12D");
	Car c2("xd", "12c");
	Car c3("rtX", "12b");
	Garage g1;
	g1.parkcar(&c1);
	g1.parkcar(&c2);
	g1.parkcar(&c3);
	g1.listcar();
}

