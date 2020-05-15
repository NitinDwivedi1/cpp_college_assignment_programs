/*
6.	Write the definition for a class called complex that has floating point data members for storing real and imaginary parts. The class has the following member functions:
void set(float, float) to set the specified value in object
void disp() to display complex number object
complex sum(complex) to sum two complex numbers & return complex number
1. Write the definitions for each of the above member functions.
2. Write main function to create three complex number objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all complex numbers.

*/
#include<iostream>
using namespace std;

class complex{
	float real;
	float imaginary;
	public:
		void set(float,float);
		void disp();
		complex sum(complex);
};
void complex::set(float a,float b)
{
	real=a;
	imaginary=b;
}
void complex::disp()
{
	cout<<real<<"+"<<imaginary<<"i";
}
complex complex::sum(complex c2)
{
	complex temp;
	temp.real=real+c2.real;
	temp.imaginary=imaginary+c2.imaginary;
	return temp;
}
int main()
{
	float r1,i1,r2,i2;
	complex c1,c2,c3;
	cout<<"Enter the value for real and imaginary part of first complex number:";
	cin>>r1>>i1;
	c1.set(r1,i1);
	cout<<"The complex number you have entered is: ";
	c1.disp();
	cout<<"\nEnter the value for real and imaginarry part of second complex number:";
	cin>>r2>>i2;
	c2.set(r2,i2);
	cout<<"The complex number you have entered is: ";
	c2.disp();
	c3=c1.sum(c2);
	cout<<"\nSum of two given complex number is: ";
	c3.disp();
}
