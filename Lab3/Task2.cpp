#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Date{	
	public:
		int day;
	    int month;
	    int year;
	    
	    void displaydate()
	    {
	    	cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
};

int main(int argc, char* argv[])
{
	Date datetest;
	datetest.day = stoi(argv[1]);
	datetest.month = stoi(argv[2]);
	datetest.year = stoi(argv[3]);
	datetest.displaydate();
	
	return 0;
}