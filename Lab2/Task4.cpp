#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee
{
	string employeename;
	string employeeid;
	int salary;
};

struct Organization
{
	string organizationname;
	string organizationnum;
	struct Employee emp;
};

int main()
{
	struct Organization org;
	org.organizationname = "Fast";
	org.organizationnum = "12345k";
	org.emp.employeeid = "786";
	org.emp.employeename = "Baba Rehmatullah";
	org.emp.salary = 10;
	cout<<"Size of Organization: "<<sizeof(Organization)<<endl;
	cout<<"Organization name: "<<org.organizationname<<endl;
	cout<<"Organization number: "<<org.organizationnum<<endl;
	cout<<"Employee Id: "<<org.emp.employeeid<<endl;
	cout<<"Employee Name: "<<org.emp.employeename<<endl;
	cout<<"Employee Salary: "<<org.emp.salary<<endl;
	
}