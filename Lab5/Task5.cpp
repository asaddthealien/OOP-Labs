#include<iostream>
using namespace std;

class Car{
    public:
    int engine_horsepower;
    int seating_capcity,no_of_speakers;
    Car(int hp,int sc,int nop):engine_horsepower(hp),seating_capcity(sc),no_of_speakers(nop){}

    void change_values(int *hp,int *sc,int *nop)const
	{
        cout<<"\nConst Function...\n\n";
        *hp=800;
        *sc=2;
        *nop=3;
    }
    void display()
	{
        cout<<"Horse Power : "<<engine_horsepower<<endl;
        cout<<"Seating Capcity : "<<seating_capcity<<endl;
        cout<<"Number of Speakers : "<<no_of_speakers<<endl;
    }
};  

int main()
{
    Car car(100,7,5);
    car.display();
    car.change_values(&car.engine_horsepower,&car.seating_capcity,&car.no_of_speakers);
    car.display();
return 0;
}