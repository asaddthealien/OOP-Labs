#include <bits/stdc++.h>
using namespace std;

class Engine{
	bool isrunning;
	Engine(){
		cout<<"Constructed"<<endl;
	}
	public:
		void start()
		{
			cout<<"Engine Started"<<endl;
			isrunning = true;
		}
		void stop()
		{
			cout<<"Engine Stopped"<<endl;
			isrunning = false;
		}
	~Engine(){
		cout<<"Destructed"<<endl;
	}
		
		
};

class Car{
	Engine engine;
	public:
		void startcar()
		{
			engine.start();
		}
		void stopcar()
		{
			engine.stop();
		}
		
};

int main()
{
	Car c1;
	c1.startcar();
	c1.stopcar();
}