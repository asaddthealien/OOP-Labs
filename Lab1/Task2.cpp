#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int sum = 0;
	for(int i = 1; i < argc; i++)
	{
		sum += stoi(argv[i]);
	}
	cout<<"Sum = "<< sum<<endl;
	
	return 0;
}