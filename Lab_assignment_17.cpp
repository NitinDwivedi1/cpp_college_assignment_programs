/*
17.	Write a program to read a list containing item name, item code and cost interactively and produce a three column output as shown below:
 
Note that  the name and code are left justified and the cost is right-justified with a precision of two digits. Training zeros are shown. Also fill the unused spaces with hyphens.

*/
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cstring>
#include<stdio.h>
using namespace std;
 int main()
 {
 	char name[20][15];
 	int code[20];
 	float cost[20];
 	cout<<"Enter the name of the item: ";
 	for(int i =0;i<5;i++)
 	{
 		gets(name[i]);
	}
 	cout<<"\nEnter code for your item: ";
 	for(int i =0;i<5;i++)
 	{
 	   cin>>code[i];
	}
 	cout<<"\nEnter cost of the item: \n";
 	for(int i =0;i<5;i++)
 	{
 		cin>>cost[i];
	}
 	//output
	cout<<setw(20);cout.setf(ios::left,ios::adjustfield);cout<<"Name";
 	cout<<setw(10);cout.setf(ios::left,ios::adjustfield);cout<<"Code";
 	cout<<setw(10);cout.setf(ios::right,ios::adjustfield);cout<<"Cost"<<endl;
 	cout<<"________________________________________";
 	 	for(int i =0;i<5;i++)
 	{
 		cout<<endl<<setw(20);cout.setf(ios::left,ios::adjustfield);cout<<name[i];
 		cout<<setw(10);cout.setf(ios::left,ios::adjustfield);cout<<code[i];
        cout<<setw(10);cout.setf(ios::right,ios::adjustfield);cout.setf(ios::fixed,ios::floatfield);cout.precision(2);cout<<cost[i];
    	
	}
 }
