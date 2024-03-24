//Program illustrating class declarations, definition and accessing class members
//Program to calculate Area of Rectangle
#include <iostream>
using namespace std;

class Rectangle                                     //class declaration
{
	int length;
	int breadth;
	public:
		void set(int l, int b)
		{
			length = l;
			breadth = b;
		}
		void display()
		{
			cout<<"Length = "<<length<<endl;
			cout<<"Breadth = "<<breadth<<endl;
		}
		int calc_Area()
		{
			int Area = (length * breadth);
			return Area;
		}
};                                                  //class definition

int main()
{
	int l, b;
	cout<<"Calculating Area Of Rectangle"<<endl;
	cout<<"Enter length and breadth of rectangle: "<<endl;
	cin>>l>>b;
	
	
}
