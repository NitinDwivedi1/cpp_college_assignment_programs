/*
23.	Write a program with following: 
a. A program to read two double type numbers from keyboard
b. A function to calculate the division of these two numbers
c. A try block to throw an exception when a wrong type of data is keyed in
d. try block to detect and throw an exception if the condition "divide by zero" occurs
e. Appropriate catch block to handle the exception thrown

*/
#include<iostream>
using namespace std;

int main()
{
	void division(double,double);
	double d1,d2;
	cout<<"Enter dividend: ";
	cin>>d1;
	cout<<"\nEnter divisor: ";
	cin>>d2;
	division(d1,d2);
}
void division(double D1,double D2)
{
	double ans;
	try{
		if(cin.fail())
		throw("wrong input");
		if(D2==0)
		throw(D2);
		ans=D1/D2;
		cout<<"\nAnswer is: "<<ans;
	}
	catch(char const* line){
		cout<<"\nException caught: "<<line;
	}
	catch(double x){
		cout<<"\nException caught: divisor=0";
	}
}
