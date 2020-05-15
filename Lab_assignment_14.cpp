/*
14.	 Assume that a bank maintains two kinds of accounts, are called as saving account and current account. The saving account provides compound interest and withdrawal facilities but no cheque book facility. The current account provides cheque book facility but no interest. Current account holders should also maintain a minimum balance and if the balance falls below the level, a service charge is imposed. 
   Create a class account that stores customer name, account number and type of account. From this derive the classes cur_acct and sav_acct to make them more specific to their requirements. Include necessary member functions in order to achieve the following tasks:
a.	Include constructor for all the three classes.
b.	Accept deposit amount from the customer and update the balance.
c.	Display the balance.
d.	Compute and deposit interest.
e.	Permit withdrawal and update the balance.
f.	         Check for minimum balance, impose penalty, necessary and update the balance.


*/
#include<iostream>
#include<conio.h>
using namespace std;

class account
{
	int acc_no;
	char type[10];
	protected:
		char name[20];
	public:
		account()
		{
			
		}
		void details()
		{
			cout<<"enter the name of customer\n";
			cin>>name;
			cout<<"enter account number\n";
			cin>>acc_no;
		}
		
};
class cur_acct:public account
{
	float balance;
	float interest;
	public:
		cur_acct()
		{
			balance=600;
		}
		void min_bal()
		{
			cout<<"if your account balance is less than 500 then  a service charge will imposed\n";
			if(balance<500)
			{cout<<"your balance is below minimum level\n service charge of Rs20 is imposed\n";
			balance-=20;}
			else
			cout<<"\n\nyour balance is sufficient";
		}
		void transaction()
		{
			float deposit;
	        float withdraw;
			int choice;
			cout<<"\n\n\n\npress 1 to deposit and 2 to withdraw\n";
			cin>>choice;
			if(choice==1)
			{
				cout<<"enter amount you want to deposit\n";
				cin>>deposit;
				balance+=deposit;
				
			}
			else if(choice==2)
			{
				cout<<"enter amount you want to withdraw\n";
				cin>>withdraw;
				balance-=withdraw;
				
			}
			else
			cout<<"wrong choice\n";
		
		}
			void display()
		{
			cout<<"mr. "<<name;
			cout<<"\nyour account balance is	"<<balance;
			cout<<"\n\n\n\n\nTHANK YOU FOR USING SBI ATM!";
		}
};
class sav_acct:public account
{
	float balance;
	float interest;
	public:
		sav_accct()
		{
			balance=600;
		}
		void transaction()
		{
			float deposit;
	        float withdraw;
			int choice;
			cout<<"\n\n\n\npress 1 to deposit and 2 to withdraw\n";
			cin>>choice;
			if(choice==1)
			{
				cout<<"enter amount you want to deposit\n";
				cin>>deposit;
				balance+=deposit;
				
			}
			else if(choice==2)
			{
				cout<<"enter amount you want to withdraw\n";
				cin>>withdraw;
				balance-=withdraw;
				
			}
			else
			cout<<"wrong choice\n";
		}
		void display()
		{
			cout<<"mr. "<<name;
			cout<<"\nyour account balance is	"<<balance;
			cout<<"\n\n\n\n\nTHANK YOU FOR USING SBI ATM!";
		}
};
int main()
{
	system("cls");
	account a;
	cur_acct c;
	sav_acct s;
	a.details();
	int type;
	cout<<"enter ur choice--current[1] or savings[2]\n";
	cin>>type;
	if(type==1)
	{
		cout<<"you have chose current account\n";
		c.min_bal();
		c.transaction();
		c.display();
		
	}
	else if(type==2)
	{
		cout<<"you have chose savings account\n";
	    s.transaction();
	    s.display();
	}
	else
	{
		cout<<"wrong choice\n";
		
	}
	
	
}
