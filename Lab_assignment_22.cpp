/*
22.	Write a class template to represent a generic vector. Include member function to     perform the following tasks:
a.	To create the vector
b.	To modify the value of a given element
c.	To multiply by a scalar value
d.	To display the vector in the form (10, 20, 30……)

*/
#include<iostream>
using namespace std;

template<class T>
class vector{
	T arr[50];
	int size=0;
	public:
		void create();
		void modify();
		void mul();
		void display();
};
template<class T>
void vector<T>::create()
{
	cout<<"Enter elements in vector:\n";
	char ans;
	do
	{
		cin>>arr[size];
		size++;
		cout<<"\npress 'y' if u want add more ";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
}
template<class T>
void vector<T>::modify()
{
	cout<<"\nEnter index number you want to modify: ";
	int index;
	cin>>index;
	cout<<"\nEnter new value in that index: ";
	cin>>arr[index];
}
template<class T>
void vector<T>::mul()
{
	cout<<"\nEnter a constant to be multiplied in vector: ";
	int cons;
	cin>>cons;
	for(int i=0;i<size;i++)
	{
		arr[i]=arr[i]*cons;
	}
}
template<class T>
void vector<T>::display()
{
	cout<<"\nVector is: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<",";
	}
}
int main()
{
	vector<float>v1;
	char ch;
	do{	
		cout<<"\nWhat do you want to perform\n";
		cout<<"a) Create vector\n";
		cout<<"b) Modify vector\n";
		cout<<"c) Mutiply vector\n";
		cout<<"d) Display vector\n";
		cout<<"e) Exit\n";
		cin>>ch;

		switch(ch)
		{
			case 'a':
				v1.create();
				break;
			case 'b':
				v1.modify();
				break;
			case 'c':
				v1.mul();
				break;
			case 'd':
				v1.display();
				break;
			case 'e':
				cout<<"Exiting...";
				exit(0);
			default:
				{
					cout<<"Wrong choice\n";
				}

		}
	}while(ch!=0);
}
