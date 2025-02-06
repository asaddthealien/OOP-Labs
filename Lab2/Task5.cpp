#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct pappu{
	int id;
	string name;
};
int main(int argc, char *argv[])
{
	int n = stoi(argv[1]);
	struct pappu pappuyar[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"Struct "<<i+1<<endl;
		cout<<"Enter Id: ";
		cin>>pappuyar[i].id;
		cout<<"Enter Name: ";
		cin>>pappuyar[i].name;
	}

	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			if(pappuyar[j].id > pappuyar[j+1].id)
			{
				int temp = pappuyar[j].id;
				pappuyar[j].id = pappuyar[j+1].id;
				pappuyar[j+1].id = temp;
				string tempo = pappuyar[j].name;
				pappuyar[j].name = pappuyar[j+1].name;
				pappuyar[j+1].name = tempo;
			}
		}
	}
	
	cout<<"Structs after sorting w.r.t ID"<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"Struct "<<i+1<<endl;
		cout<<"ID: "<<pappuyar[i].id<<endl;
		cout<<"Name: "<<pappuyar[i].name<<endl;
	}
	
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			if(pappuyar[j].name[0] > pappuyar[j+1].name[0])
			{
				int temp = pappuyar[j].id;
				pappuyar[j].id = pappuyar[j+1].id;
				pappuyar[j+1].id = temp;
				string tempo = pappuyar[j].name;
				pappuyar[j].name = pappuyar[j+1].name;
				pappuyar[j+1].name = tempo;
			}
		}
	}
	
	cout<<"Structs after sorting w.r.t first letter of name"<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"Struct "<<i+1<<endl;
		cout<<"ID: "<<pappuyar[i].id<<endl;
		cout<<"Name: "<<pappuyar[i].name<<endl;
	}
	
}