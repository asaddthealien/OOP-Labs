#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book{
	string bookname;
	string ISBN;
	string author;
	string publisher;
	
	public:
		void setdetails(string bookname, string ISBN, string author, string publisher)
		{
			this->bookname = bookname;
			this->ISBN = ISBN;
			this->author = author;
			this->publisher = publisher;
		}
		
		void getdatails()
		{
			cout<<"Book Name: "<<bookname<<endl;
			cout<<"ISBN: "<<ISBN<<endl;
			cout<<"Author: "<<author<<endl;
			cout<<"Publisher: "<<publisher<<endl;
		}
};

int main()
{
    Book booktest[5];
	for(int i = 0; i < 5; i++)
	{
		string bookname;
	    string ISBN;
	    string author;
    	string publisher;
    	cout<<"Enter details for Book "<<i+1<<endl;
    	cout<<"Book Name: ";
    	cin>>bookname;
		cout<<"ISBN: ";
		cin>>ISBN;
		cout<<"Author: ";
		cin>>author;
		cout<<"Publisher: ";
		cin>>publisher;
    	booktest[i].setdetails
		(bookname, ISBN, author, publisher);	
	}
	cout<<"Book Details"<<endl;
	for(int i = 0; i<5; i++)
	{
		cout<<"Book "<<i+1<<endl;
		booktest[i].getdatails();
	}
	
}