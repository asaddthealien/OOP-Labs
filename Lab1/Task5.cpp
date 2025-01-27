#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	if(argc < 6)
	{
		cout<<"Not Enough Arguments"<<endl;
		return 1;
	}
	else
	{
		int n = 0;
	    n = argc - 6;

	    string moviename[n];
	    for(int i = 0; i < n; i++)
	    {  
		    moviename[i] = argv[i+1];
	    }
        float adtprice = stof(argv[n+1]);
	    float chtprice = stof(argv[n+2]);
	    int adtsold = stoi(argv[n+3]);
	    int chtsold = stoi(argv[n+4]);
	    float charity = stof(argv[n+5]);
	    float amount = (adtsold*adtprice)+(chtsold*chtprice);
	    float donation = amount*(charity/100);
	
	    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
	    cout<<"Movie name:.......................";
	    for(int i = 0; i < n; i++)
	    {
		    cout<<moviename[i]<<" ";
	    }
	    cout<<endl;
	    cout<<"Number of tickets sold:..............."<<adtsold+chtsold<<endl;
	    cout<<"Gross Amount:.........................$";
	    printf("%.2f\n",(adtsold*adtprice)+(chtsold*chtprice));
	    cout<<"Amount Donted:........................$";
	    printf("%.2f\n",donation);
	    cout<<"Net Sale:.............................$";
	    printf("%.2f\n",amount - donation);
	    
	    
	return 0;
	}
	
}