#include <iostream>
#include <string>
using namespace std;

void* add(void* arr, int argc)
{
	int* array = (int*)arr; 
	for(int i = 1; i < argc; i++)
	{
		array[i-1] += 1; 
	}
	return arr;
}

int main(int argc, char *argv[])
{
	int arr[argc-1];
	for(int i =  1; i < argc; i++)
	{
		arr[i-1] = stoi(argv[i]);
	}
	int* ptr = arr;
	void* ans =add(ptr, argc);
	int *answer = (int*)ans;
	for(int i = 1; i < argc; i++)
	{
		cout<<answer[i-1]<<" ";
	}
}