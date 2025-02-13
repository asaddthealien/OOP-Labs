#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee{
	string fname;
	string lname;
	double salary;
	
	public:
		void setfname(string fname)
		{
			this->fname = fname;
		}
		void setlname(string lname)
		{
			this->lname = lname;
		}
		void setsalary(double salary)
		{
			if(salary < 0)
			{
				this->salary = 0.0;
			}
			else
			{
				this->salary = salary;
			}
		}
		
		string getfname()
		{
			return fname;
		}
		string getlname()
		{
			return lname;
		}
		double getsalary()
		{
			return salary;
		}
		
};

int main(int argc, char *argv[])
{
	Employee emp1, emp2;
	emp1.setfname(argv[1]);
	emp1.setlname(argv[2]);
	emp1.setsalary(stod(argv[3]));
	emp2.setfname(argv[4]);
	emp2.setlname(argv[5]);
	emp2.setsalary(stod(argv[6]));
	
	cout<<"Employee 1's yearly salary: "<<emp1.getsalary()*12<<endl;
	cout<<"Employee 2's yearly salary: "<<emp2.getsalary()*12<<endl;
	
	double s1 = stod(argv[3]);
	s1 += (stod(argv[3])*0.10);
	double s2 = stod(argv[6]);
	s2 += (stod(argv[6])*0.10);
	emp1.setsalary(s1);
	emp2.setsalary(s2);
	
	cout<<"After 10% raise:"<<endl;
	cout<<"Employee 1's yearly salary: "<<emp1.getsalary()*12<<endl;
	cout<<"Employee 2's yearly salary: "<<emp2.getsalary()*12<<endl;
	
	return 0;
}