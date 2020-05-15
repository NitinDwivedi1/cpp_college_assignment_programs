/*
21.	Write a function template for finding the minimum value contained in an array.
*/
#include<iostream>
using namespace std;

template <class T>
T minimum(T arr[],int size)
{
	T min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
}
int main()
{
	int arr1[5];
	float arr2[5];
	cout<<"Enter the 5 integer element: ";
	for(int i=0;i<5;i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter the 5 float element: ";
	for(int i=0;i<5;i++)
	{
		cin>>arr2[i];
	}
	int min1=minimum(arr1,5);
	float min2=minimum(arr2,5);
	cout<<"Minimum value in integer array is: "<<min1;
	cout<<"\nMinimum value in float array is: "<<min2;
}
