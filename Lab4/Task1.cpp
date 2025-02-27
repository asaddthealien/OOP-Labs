#include <iostream>
#include <string>
using namespace std;

class circle{
	int radius;
	
	public:
		circle(int radius){
			this->radius = radius;
		}
		
		double getarea()
		{
			double area = 3.142*(radius*radius);
			return area;
		}
		
		double getperimeter()
		{
			double perimeter = 2*3.142*radius;
			return perimeter;
		}
		
};

int main(int argc, char *argv[])
{
	circle c1(stoi(argv[1]));
	cout<<"Area of Circle: "<<c1.getarea()<<endl;
	cout<<"Perimeter of Circle: "<<c1.getperimeter()<<endl;
	
	
	return 0;
}