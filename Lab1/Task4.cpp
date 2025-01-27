#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(int argc, char* argv[])
{
	float w = stof(argv[1]) * 2.2;
	printf("%.2f lbs", w);
}