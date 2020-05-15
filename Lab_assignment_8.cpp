/*
8.	Write a date class with data members dd, mm, yy. Write a constructor and overload ++ operator, << operator and >> operator.
*/
#include<iostream>
using namespace std;

class date{
	int dd;
	int mm;
	int yy;
	public:
		date();
		void operator++();
		friend istream&operator>>(istream&,date&);
		friend ostream&operator<<(ostream&,date&);
};
date::date()
{
	dd=1;
	mm=1;
	yy=2000;
}
void date::operator++()
{
	if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
	{
		if(dd<31)
		{
			dd++;
		}
		else
		{
			dd=1;
			if(mm<12)
			{
				mm++;
			}
			else
			{
				mm=1;
				yy++;
			}
		}
	
	}
	else if(mm==2)
	{
		if(dd<28)
		{
			dd++;
		}
		else
		{
			dd=1;
			if(mm<12)
			{
				mm++;
			}
			else
			{
				mm=1;
				yy++;
			}
		}

	}
	else
	{
		if(dd<30)
		{
			dd++;
		}
		else
		{
			dd=1;
			if(mm<12)
			{
				mm++;
			}
			else
			{
				mm=1;
				yy++;
			}
		}
	
	}
}
istream&operator>>(istream&din,date&d1)
{
	din>>d1.dd>>d1.mm>>d1.yy;
	cout<<"Date is--> "<<d1.dd<<":"<<d1.mm<<":"<<d1.yy;
	return (din);
}
ostream&operator<<(ostream&dout,date&d1)
{
	cout<<"\nNext date is--> ";
	dout<<d1.dd<<":"<<d1.mm<<":"<<d1.yy;
	return dout;
}
int main()
{
	date d1;
	cout<<"Enter the date month and year respectively\n";
	cin>>d1;
	++d1;
	cout<<d1;
	
}
