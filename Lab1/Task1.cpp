#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	float max = stof(argv[1]);
	float sechigh = -10;
	for(int i = 1; i < argc; i++)
	{
		float temp = stof(argv[i]);
		if(stof(argv[i]) > max)
		{
			max = stof(argv[i]);
		}
		
	}
	
	for(int i = 1; i < argc; i++)
	{
		if(stof(argv[i]) < max && stof(argv[i]) > sechigh)
		{
			sechigh = stof(argv[i]);
		}
	}
	cout<<"Second Highest Number is: "<<sechigh;
	
}