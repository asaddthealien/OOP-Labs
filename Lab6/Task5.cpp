#include <iostream>
using namespace std;

class Vehicle{
    protected:
    int price;

    public:
    Vehicle(int price){
        this->price = price;
    }
};

class Car : public Vehicle{
    protected:
    int seatingcapacity;
    int numofdoors;
    string fueltype;

    public:
    Car(int seatingcapacity, int numofdoors, string fueltype, int price) : Vehicle(price), seatingcapacity(seatingcapacity), numofdoors(numofdoors), fueltype(fueltype) {}
};

class Motorcycle : public Vehicle{
    protected:
    int numofcylinders;
    int numofgears;
    int numofwheels;

    public:
    Motorcycle(int numofcylinders, int numofgears, int numofwheels, int price) : Vehicle(price), numofcylinders(numofcylinders), numofgears(numofgears), numofwheels(numofwheels) {}
};

class Audi : public Car{
     string modeltype;
     public:
     Audi(string modeltype, int seatingcapacity, int numofdoors, string fueltype, int price) : Car(seatingcapacity, numofdoors, fueltype, price), modeltype(modeltype){}
     void printdetails()
     {
        cout<<modeltype<<endl;
        cout<<seatingcapacity<<endl;
        cout<<numofdoors<<endl;
        cout<<fueltype<<endl;
        cout<<price<<endl;
     }
};

class Yamaha : public Motorcycle{
    string modeltype;
    public:
    Yamaha(string modeltype, int numofcylinders, int numofgears, int numofwheels, int price) : Motorcycle(numofcylinders, numofgears, numofwheels, price), modeltype(modeltype) {}
    void printdetails()
     {
        cout<<modeltype<<endl;
        cout<<numofcylinders<<endl;
        cout<<numofgears<<endl;
        cout<<numofwheels<<endl;
        cout<<price<<endl;
     }

};


int main()
{
    Yamaha y1("YBR125", 3, 5, 2, 120000);
    Audi a1("Mehru", 5, 4, "cng", 800000);
    y1.printdetails();
    a1.printdetails();


}