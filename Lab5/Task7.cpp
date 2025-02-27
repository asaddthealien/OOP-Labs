#include <bits/stdc++.h>
using namespace std;

class student{
	int a = 0;
	const int* rollno = &a;
	
	public:
		void setrollno(int roll)
		{
			rollno = &roll;
		}
		void printroll()
		{
			cout<<*rollno<<endl;
		}
};

int main()
{
	student s;
	int n;
	cin>>n;
	s.setrollno(n);
	s.printroll();
}
