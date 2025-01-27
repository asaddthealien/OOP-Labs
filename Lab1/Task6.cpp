#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(int argc, char* argv[])
{
	if(argc < 7)
	{
		cout<<"Not Enough Arguments"<<endl;

	}
	else
	{
		string fname = argv[1];
	    string lname = argv[2];
	    float scores[5];
	    float avgscore = 0;
	    for(int i = 0; i < 5; i++)
	    {
		    scores[i] = stof(argv[i+3]);
	    }
	    cout<<"Student Name: "<<fname<<" "<<lname<<endl;
	    cout<<"Test Scores:";
	    for(int i = 0; i < 5; i++)
	    {
	    	cout<<" "<<scores[i];
	    	avgscore += scores[i];
		}
		cout<<endl;
		avgscore = avgscore/5;
		printf("Average Test Score: %.2f", avgscore);
		
	}
}