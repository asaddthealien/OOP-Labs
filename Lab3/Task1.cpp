#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User{
	public:
		string name;
		int age;
};

int main()
{
	User obj;
	obj.name = "Teo";
	obj.age = 24;
	cout<<"My name is "<<obj.name<<" and I'm "<< obj.age <<" years old"<< endl;
	
	return 0;
}