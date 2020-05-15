/*
5.	Write a C++ program for calculating volume of sphere, cuboid and cylinder using function overloading.
*/
#include<iostream>
using namespace std;

class volume
{
 float sphere_radius;
 float cuboid_length,cuboid_breadth,cuboid_height;
 float cylinder_height,cylinder_radius;
  public:
 float calculation(float sphere_radius)
  {
   return(1.33333*3.14*(sphere_radius*sphere_radius*sphere_radius));
  }
 int calculation(float cuboid_length,float cuboid_breadth,float cuboid_height)
  {
   return(cuboid_length*cuboid_breadth*cuboid_height);
  }
 float calculation(float ch1,float cr1)
  {
    cylinder_height=ch1;
    cylinder_radius=cr1;
   return(3.14*(cylinder_radius*cylinder_radius)*cylinder_height);
  }
  };
 int main()
 {
  float l1,b1,h1,h2,r2,r3;
  volume v1;
  cout<<"Enter the length, breadth, height of cuboid: ";
  cin>>l1>>b1>>h1;
  cout<<"\nVolume of cuboid is:"<<v1.calculation(l1,b1,h1)<<endl;
  cout<<"\n\nEnter the height and radius of cylinder:";
  cin>>h2>>r2;
  cout<<"Volume of cylinder is:"<<v1.calculation(h2,r2)<<endl;
  cout<<"\n\nEnter the radius of sphere:";
  cin>>r3;
  cout<<"Volume of sphere is:"<<v1.calculation(r3)<<endl;
 }
