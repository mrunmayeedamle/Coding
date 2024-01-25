//Program illustrating default, parameterized and copy constructor
//Program to calculate area of circle

#include <iostream>
#define pi 3.14
using namespace std;

class Circle
{
	float radius;
	public:
		Circle()                      //default constructor
		{
			cout<<"Calculating Area of Circle: "<<endl;
			cout<<"Value of Pi: "<<pi<<endl<<endl;
		}
		
		Circle(float R)               //parameterized constructor
		{
			radius = R;
		}
		Circle(Circle &obj)           //copy constructor
		{
			radius = obj.radius;
		}
		float Calc_Area()
		{
			return  pi * radius * radius;
		}
};

int main()
{
	Circle C;
	float R;
	cout<<"Enter Radius: "<<endl;
	cin>>R;
	Circle C1(R);
	Circle C2 = C1;
	cout<<"Area of Circle 1: "<<C1.Calc_Area()<<endl;
	cout<<"Area of Circle 2: "<<C2.Calc_Area();
	return 0;	
}
