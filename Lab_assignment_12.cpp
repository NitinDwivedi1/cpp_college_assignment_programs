/*
12.	Create an array class. In it dynamically allocate memory for integer array of size according to value passed to constructor, and write following methods
i.	copy constructor 
ii.	destructor 
iii.	Overload [ ] operator. 
iv.	 Overload << , >>operator.

*/
#include<iostream>
using namespace std;

class Array{
	int *ptr;
	int size;
	public:
		Array()	{};
		Array(int*,int);
		int& operator[](int);
		friend istream&operator>>(istream&,Array&);
		friend ostream&operator<<(ostream&,Array&);
		~Array()
		{
			cout<<"Memory destroyed\n";
		}
};
Array::Array(int *arr,int size)
{
	ptr=new int[size];
}
int& Array::operator[](int a)
{
	return(ptr[a]);
}
istream&operator>>(istream&din,Array&a)
{
	for(int i=0;i<5;i++)
	{
		din>>a.ptr[i];
	}
	return din;
}
ostream&operator<<(ostream&dout,Array&a)
{
	for(int i=0;i<5;i++)
	{
		dout<<a.ptr[i];
		cout<<endl;
	}
	return dout;
	delete[] a.ptr;
}
int main()
{
	int arr[5];
	Array a1(arr,5);
	cout<<"Enter 5 elements of array:\n";
	cin>>a1;
	a1[2]=7;
	a1[3]=15;
	cout<<"Array after changing 3rd and 4th element:\n";
	cout<<a1;

}

