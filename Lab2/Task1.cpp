#include <iostream>
#include <vector>
#include <string>
using namespace std;

int summ(int *array, int size)
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

int main(int argc, char *argv[])
{
	int arr[argc-1];
	for(int i =  1; i < argc; i++)
	{
		arr[i-1] = stoi(argv[i]);
	}
	int* ptr = arr;
	int ans = summ(ptr, (argc-1));
	cout<<ans<<endl;
}