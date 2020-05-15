/*
7.	Write the definition for a class called Rectangle that has floating point data members length and width. The class has the following member functions:
void setlength(float) to set the length data member
void setwidth(float) to set the width data member
float perimeter() to calculate and return the perimeter of the rectangle
float area() to calculate and return the area of the rectangle
void show() to display the length and width of the rectangle
int sameArea(Rectangle) that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
1. Write the definitions for each of the above member functions.
2. Write main function to create two rectangle objects. Set the length and width of the first rectangle to 5 and 2.5. Set the length     and width of the second rectangle to 5 and 18.9. Display each rectangle and its area and perimeter.
3. Check whether the two Rectangles have the same area and print a message indicating the result. Set the length and width of the     first rectangle to 15 and 6.3. Display each Rectangle and its area and perimeter again. Again, check whether the two   Rectangles have the same area and print a message indicating the result.

*/
#include<iostream>
using namespace std;

class rectangle{
	float length;
	float width;
	public:
		void setlength(float);
		void setwidth(float);
		float perimeter();
		float area();
		void show();
		int sameArea(rectangle);
		
};
void rectangle::setlength(float l1)
{
	length=l1;
}
void rectangle::setwidth(float w1)
{
	width=w1;
}
float rectangle::perimeter()
{
	return(2*(length+width));
}
float rectangle::area()
{
	return(length*width);
}
int rectangle::sameArea(rectangle r2)
{
	if(area()==r2.area())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	rectangle r1,r2;
	r1.setlength(5);
	r1.setwidth(2.5);
	r2.setlength(5);
	r2.setwidth(18.9);
	float p1=r1.perimeter();
	cout<<"Perimeter of first triangle is: "<<p1<<endl;
	float a1=r1.area();
	cout<<"Area of first triangle is: "<<a1<<endl;	
	float p2=r2.perimeter();
	cout<<"Perimeter of second triangle is: "<<p2<<endl;
	float a2=r2.area();
	cout<<"Area of second triangle is: "<<a2<<endl;
	int value=r1.sameArea(r2);
	if(value==1)
	{
		cout<<"\n\nBoth the rectangles have the same area!\n";
	}
	else
	{
		cout<<"\n\nBoth the rectangles have the different area!\n";
	}
}
