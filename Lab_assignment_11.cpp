/*
11.	Create a class time with hours and minutes as its data members. Write a C++ program which has a member function to overload binary operator + to add two times. Also overload relational operator > to compare 2 times. It should also overload << (output) and >>(input) operator.
*/
#include<iostream>
using namespace std;

class time{
	int hour;
	int minute;
	public:
		time operator+(time);
		time operator>(time);
		friend istream&operator>>(istream&,time&);
		friend ostream&operator<<(ostream&,time&);
};
time time::operator+(time t)
{
	time temp;
	temp.hour=hour+t.hour;
	temp.minute=minute+t.minute;
	temp.hour=temp.hour+(temp.minute/60);
	temp.minute=temp.minute%60;
	return temp;
}
time time::operator>(time t)
{
	if(hour>t.hour)
	{
		cout<<"\nFirst time is longer\n";
	}
	else if (hour==t.hour)
	{
		if(minute>t.minute)
		{
			cout<<"\nFirst time is longer\n";
		}
		else if(minute==t.minute)
		{
			cout<<"\nBoth the times are equal/n";
		}
		else
		{
			cout<<"\nSecond time is longer";
		}
	}
	else
	{
		cout<<"\nSecond time is longer\n";
	}
}
istream&operator>>(istream&din,time&t)
{
	din>>t.hour;
	din>>t.minute;
	return din;
}
ostream&operator<<(ostream&dout,time&t)
{
	dout<< t.hour;
	cout<<"hr ";
	dout<<t.minute;
	cout<<"min ";
	return dout;
}
int main()
{
	time t1,t2,t3;
	cout<<"Enter the 1st time in hours and minutes separatelty\n";
	cin>>t1;
	cout<<"Time you entered is: ";
	cout<<t1;
	cout<<"\nEnter the second time in hours and minutes separately\n";
	cin>>t2;
	cout<<"\nTime you entered is: ";
	cout<<t2;
	cout<<"\nSum of these two times is: ";
	t3=t1+t2;
	cout<<t3;
	t1>t2;
}
