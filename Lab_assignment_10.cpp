/*
10.	Write a menu driven program for addition, subtraction, display result of two distances (given in meter and centimetre) .
i.	Overload '+' operator with member function
ii.	Overload '-' operator using friend function
iii.	Overload << and >> operator

*/
#include<iostream>
using namespace std;

class distances {
	int metre;
	int centimetre;
	public:
		distances operator+(distances);
		friend distances operator-(distances,distances);
		friend istream&operator>>(istream&,distances&);
		friend ostream&operator<<(ostream&,distances&);
};
distances distances::operator+(distances d)
{
	distances temp;
	temp.metre=metre+d.metre;
	temp.centimetre=centimetre+d.centimetre;
	temp.metre=temp.metre+temp.centimetre/100;
	temp.centimetre=temp.centimetre%100;
	return temp;
}
distances operator-(distances d,distances D)
{
	distances temp;
	int value3;
	int value1=(d.metre*100)+d.centimetre;
	int value2=(D.metre*100)+D.centimetre;
	if(value1>value2)
	{
		value3=value1-value2;
	}
	else
	{
		value3=value2-value1;
	}
	temp.metre=value3/100;
	temp.centimetre=value3%100;
	return temp;
}
istream&operator>>(istream&din,distances&d)
{
	din>>d.metre;
	din>>d.centimetre;
	return din;
}
ostream&operator<<(ostream&dout,distances&d)
{
	dout<<d.metre;
	cout<<"m";
	dout<<d.centimetre;
	cout<<"cm.\n";
	return dout;
}
int main()
{
	distances d1,d2,d3,d4;
	cout<<"Enter the 1st distane in metre and centimeter separately: ";
	cin>>d1;
	cout<<"\nDistance you entered is: ";
	cout<<d1;
	cout<<"\nEnter the 2nd distance in metre and centimetre: ";
	cin>>d2;
	cout<<"\nDistance you entered is: ";
	cout<<d2;
	cout<<"What do you want to perform:addition or substraction,press 1 or 2\n";
	int choice;
	cin>>choice;
	if(choice==1)
	{
		d3=d1+d2;
		cout<<"\nSum of the given two distance is: "<<d3;
	}
	else if(choice==2)
	{
		d4=d1-d2;
		cout<<"\nDifference of the two distance is: "<<d4;
	}
	else
	cout<<"Wrong choice!!\n";
}
