/*
9.	Develop a mark sheet in C++ for university examination with following data:
a) Students' name
b) Enrolment no
c) roll no
d) Theory marks in 5 subjects
e) Practical marks in five subjects
f) grade
Overload << and >> operator .Grade should be calculated for each subject. Use Constructor overloading. Roll no should be auto generated.

*/
#include<iostream>
using namespace std;

class exam{
	char name[20];
	int enroll;
	int roll;
	float english,maths,chemistry,physics,CS;
	public:
		exam();
		exam(exam&);
		void grade();
		friend istream&operator>>(istream&,exam&);
		friend ostream&operator<<(ostream&,exam&);
};
exam::exam()
{
	roll=37;
	english,maths,chemistry,physics,CS=0;
}
exam::exam(exam&e3)
{
	roll=e3.roll;
	english=e3.english;
	maths=e3.maths;
	chemistry=e3.chemistry;
	physics=e3.physics;
	CS=e3.CS;
}
istream&operator>>(istream&din,exam&e3)
{
	din>>e3.english>>e3.maths>>e3.chemistry>>e3.physics>>e3.CS;
	return din;
}
ostream&operator<<(ostream&dout,exam&e3)
{
	cout<<"Given marks are -->\n";
	cout<<"English: ";
	dout<<e3.english;
	cout<<"\nMaths: ";
	dout<<e3.maths;
	cout<<"\nChemistry: ";
	dout<<e3.chemistry;
	cout<<"\nPhysics: ";
	dout<<e3.physics;
	cout<<"\nCS: ";
	dout<<e3.CS;
	return dout;
}
void exam::grade()
{
	cout<<"ROLL_NO=>"<<roll;
	if(english>32)
	cout<<"\nEnglish:pass\n";
	else
	cout<<"\nEnglish:fail\n";
	if(maths>32)
	cout<<"Maths:pass\n";
	else
	cout<<"Maths:fail\n";
	if(chemistry>32)
	cout<<"Chemistry:pass\n";
	else
	cout<<"Chemitry:fail\n";
	if(physics>32)
	cout<<"Physics:pass\n";
	else
	cout<<"Physics:fail\n";
	if(CS>32)
	cout<<"CS:pass\n";
	else
	cout<<"CS:fail\n";

}
int main()
{
	
	exam e1;
	exam e2(e1);
	cout<<"Enter the marks of five theoretical subject,order==>English,Maths,Chemistry,Physics,CS.";
	cin>>e1;
	cout<<e1;
	cout<<"\nEnter the marks of five practical subject,order==>English,Maths,Chemistry,Physics,CS.";
	cin>>e2;
	cout<<e2;
	cout<<"\n\n\n\nGrade in theoretical subjects-->\n";
	e1.grade();
	cout<<"\n\nGrade in practical subjects-->\n";
	e2.grade();
}
