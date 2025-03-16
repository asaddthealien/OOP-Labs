#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Book{
	protected:
		string genre;
		
	public:
		void setgenre(string genre)
		{
			this->genre = genre;
		}
		string getgenre()
		{
			return genre;
		}
};

class Fiction: public Book{
	string title;
	string author;
	
	public:
    Fiction(){
        setgenre("Fiction");
    }
		void getdetails()
		{

			{
				cout<<"Title: "<<endl;
                cin>>title;
				cout<<"Author: "<<endl;
				cin>>author;
			}
		}
		
		void displaydetails()
		{

			{
				cout<<"Title: "<<title<<endl;
				cout<<"Genre: "<<genre<<endl;
				cout<<"Author: "<<author<<endl;
			}
		}
	
};

class NonFiction: public Book{
	string title;
	string author;
	
	public:
    NonFiction(){
        setgenre("Nonfiction");
    }
		void getdetails()
		{
			
			{
				cout<<"Title: "<<endl;
                cin>>title;
				cout<<"Author: "<<endl;
				cin>>author;
			}
		}
		
		void displaydetails()
		{

			{
				cout<<"Title: "<<title<<endl;
				cout<<"Genre: "<<genre<<endl;
				cout<<"Author: "<<author<<endl;
			}
		}
	
};


int main()
{
	Book b1;
    string s;
    cout<<"Enter genre(Fiction/Nonfiction): ";
    cin>>s;
	b1.setgenre(s);
	Fiction fic;
	NonFiction nonfic;
	if(b1.getgenre() == "Fiction")
	{
		fic.getdetails();
		fic.displaydetails();
	}
	else if(b1.getgenre() == "Nonfiction")
	{
		nonfic.getdetails();
		nonfic.displaydetails();
	}
	else
	{
		cout<<"ERROR!!!!!   ye agle hafte tak mil jayegi"<<endl;
	}
	return 0;
	
}