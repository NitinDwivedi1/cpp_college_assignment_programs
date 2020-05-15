/*
3. Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following criteria
            Distance                                                          Fuel
            <=1000                                                           500
            more than 1000  and <=2000                          1100
            more than 2000                                              2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number, Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel.
A function SHOWINFO() to allow user to view the content of all the data members.

*/
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class flight{
	int flight_no;
	char destination[50];
	float distance;
	float fuel;
	void cal_fuel()
	{
		if(distance<=1000)
		{
			fuel=500;
		}
		else if(distance>1000&&distance<=2000)
		{
			fuel=1100;
		}
		else if(distance>2000)
		{
			fuel=2200;
		}
	}
	public:
		void feed_info()
		{
			cout<<"Enter the flight number,destination,distance:\n";
			cin>>flight_no;
			cin>>destination;
			cin>>distance;
			cal_fuel();
		}
		void show_info()
		{
			cout<<"\n\n\nflight no is: "<<flight_no<<"\ndestination is: ";
			cout<<destination;
			cout<<"\ndistance is: "<<distance<<"\nfuel= "<<fuel<<"lt";
		}
};
int main()
{
	flight f1;
	f1.feed_info();
	f1.show_info();
}
