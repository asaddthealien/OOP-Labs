#include <iostream>
#include <string>
#include <cstring>
using namespace std;



int main(int argc, char *argv[])
{
	int n = 5;
	int* ptr = new int[n];
	int counter= 0;
	for(int i = 1; i < argc; i++)
	{
		if(i == n)
		{
			counter++;
			break;
		}
		ptr[i-1] = stoi(argv[i]);
	}
	
	if(counter>0)
	{
		int* ptr2 = new int[n*2];
	    memcpy(ptr2, ptr, 5 * sizeof(int));
	    for(int i = 5; i < argc; i++)
	    {
		    ptr2[i-1] = stoi(argv[i]);
	    }
	    for(int i = 0; i < argc-1; i++)
	    {
		    cout<<ptr2[i]<<" ";
	    }
	}
}