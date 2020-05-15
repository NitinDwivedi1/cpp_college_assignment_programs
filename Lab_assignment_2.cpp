/*
2. Define a class student with the following specification
Private members of class student
admno                        integer
sname                        20 character
eng. math, science       float
total                            float
Public member function of class student
ctotal()                        a function to calculate eng + math + science with float return type.
Takedata()                   Function to accept values for admno, sname, eng, science Showdata()                   Function to display all the data members on the screen

*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

class student{
	int admno;
	char sname[20];
	float eng,math,science;
	float total;
	public:
		float ctotal()
		{
			return(eng+math+science);
			
		}
		void takedata()
		{
			cout<<"Enter your name:\n";
			gets(sname);
			cout<<"Enter admission no.:\n";
			cin>>admno;
			cout<<"Enter marks for three subjects eng,maths,science respectively:\n";
			cin>>eng>>math>>science;
			
		}
		void showdata()
		{
			cout<<" Name			adm_no			eng	maths	science		total\n";
			cout<<"___________________________________________________________________________________________________________________\n";
			puts(sname);
			cout<<"			"<<admno<<"			"<<eng<<"	"<<math<<"	"<<science<<"		"<<ctotal();
			
		}
};
int main()
{
	student s1;
	s1.takedata();
	s1.showdata();
}
