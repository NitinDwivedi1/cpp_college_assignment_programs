/*
16.	Create a base class called shape .Use this class to store two double type values that could be used to compute the area of figures, Derive two specific classes called triangle and rectangle from the base shape .Add to the base class, a member function get_data() to initialise base class data members and another member function display_area() to compute and display the area of figures. Make display_area () as a virtual function and redefine this function in the derived class to suit their requirements.
Using these three classes, design a program that will accept dimensions of a triangle or a rectangle interactively and display the area.
Area of rectangle = x*y
Area of triangle = ½*x*y

*/
#include<iostream>
#include<conio.h>
using namespace std;
class shape{
	public:
	    double x;
	    double y;
	public:
		void get_data(double a,double b)
		{
			x=a;
			y=b;
		}
		virtual void display_area(){
		}
};
class rectangle:public shape{
	public:
		virtual void display_area()
		{
			double area=x*y;
			cout<<"area of rectangle is: "<<area<<endl;
		}
};
class triangle:public shape{
	public:
		virtual void display_area()
		{
			double area=(x*y)/2;
			cout<<"area of triangle is: "<<area<<endl;
		}
};
int main()
{
	shape *ptr[2];
	rectangle r1;
	triangle t1;
	ptr[0]=&r1;
	ptr[1]=&t1;
	double m,n;
	
	cout<<"enter the parameters for rectangle\n";
	cin>>m>>n;
	ptr[0]->get_data(m,n);
	cout<<"enter the parameters for triangle\n";
	cin>>m>>n;
	ptr[1]->get_data(m,n);
	cout<<"\n\n\n";
	ptr[0]->display_area();
	ptr[1]->display_area();
	
	return 0;
}
