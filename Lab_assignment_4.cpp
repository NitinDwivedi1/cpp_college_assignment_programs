/*
4.	Write a menu driven program to perform following:
a) Input a matrix
b) Display matrix
c) Add two matrix
d) Multiply two matrixes
e) Transpose a matrix

*/
#include<iostream>
#include<cstring>
using namespace std;


void add_matrix()
{
	int a[50][50],b[50][50],c[50][50];
	int row,column;
	cout<<"\nEnter the no. of row and column in matrix_1: ";
	cin>>row>>column; 

	cout<<"Enter the elements of matrix_1: \n\n";
	for(int i=0;i<row;i++)
	{
		cout<<"Enter elements of row "<<i<<":\n";
		for(int j=0;j<column;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"The matrix you entered is shown here: \n\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<a[i][j]<<"	";
			
		}
		cout<<endl<<endl;
	}
	int row2,column2;
	cout<<"\nEnter the no. of row and column in matrix_2: ";
	cin>>row2>>column2; 

	cout<<"Enter the elements of matrix 2: \n\n";
	for(int i=0;i<row2;i++)
	{
		cout<<"Enter elements of row "<<i<<":\n";
		for(int j=0;j<column2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"The matrix you entered is shown here: \n\n";
	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<column2;j++)
		{
			cout<<b[i][j]<<"	";
			
		}
		cout<<endl<<endl;
	}


	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	cout<<"The resultant matrix is shown here: \n\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<c[i][j]<<"	";
			
		}
		cout<<endl<<endl;
	}


}
void transpose_matrix()
{
	int a[50][50],b[50][50];
	int row,column;
	cout<<"\nEnter the no. of row and column in matrix: ";
	cin>>row>>column; 

	cout<<"Enter the elements of matrix: \n\n";
	for(int i=0;i<row;i++)
	{
		cout<<"Enter elements of row "<<i<<":\n";
		for(int j=0;j<column;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"The matrix you entered is shown here: \n\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<a[i][j]<<"	";
			
		}
		cout<<endl<<endl;
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			b[i][j]=a[j][i];
			
		}
	}
	cout<<"The resultant matrix is shown here: \n\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<b[i][j]<<"	";
			
		}
		cout<<endl<<endl;
	}

	
}
void multiply_matrix()
{
	int a[50][50],b[50][50],c[50][50];

	int row,column;
	cout<<"\nEnter the no. of row and column in matrix_1: ";
	cin>>row>>column; 

	cout<<"Enter the elements of matrix_1: \n\n";
	for(int i=0;i<row;i++)
	{
		cout<<"Enter elements of row "<<i<<":\n";
		for(int j=0;j<column;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"The matrix you entered is shown here: \n\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<a[i][j]<<"	";
			
		}
		cout<<endl;
	}

	int row2,column2;
	cout<<"\nEnter the no. of row and column in matrix_2: ";
	cin>>row2>>column2; 

	cout<<"Enter the elements of matrix_2: \n\n";
	for(int i=0;i<row2;i++)
	{
		cout<<"Enter elements of row "<<i<<":\n";
		for(int j=0;j<column2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"The matrix you entered is shown here: \n\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<b[i][j]<<"	";
			
		}
		cout<<endl;
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column2;j++)
		{
			for(int k=0;k<column;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	cout<<"The resultant matrix is shown here: \n\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column2;j++)
		{
			cout<<c[i][j]<<"	";
			
		}
		cout<<endl<<endl;
	}

}
int main()
{
    cout<<"\nwhich operation do you want to perform: addition,multiplicatiom,transpose...press 1 or 2 or 3 for choices respectively: ";
    int choice;
    cin>>choice;
    if(choice==1)
    {
    	add_matrix();
	}
	else if(choice==2)
	{
		multiply_matrix();
	}
	else if(choice==3)
	{
		transpose_matrix();
	}
	else
	{
		cout<<"\nwrong choice";
	}
}











