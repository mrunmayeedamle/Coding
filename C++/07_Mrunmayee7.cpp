//Program to demonstrate friend function and friend class
#include <iostream>
using namespace std;
class A;
class B
{
	int b;
	friend class A;                                        //initializing friend class
	public:
		B():b(24){cout<<"Initializing B: 24"<<endl<<endl;}
};

class A
{
	int a;
	public:
		A():a(12){	cout<<"Initializing A: 12"<<endl;}
		void operate()
		{
			B obj;
			cout<<"A+B = "<<(a + obj.b)<<endl;           //accessing private members of class B in class A
			cout<<"A-B = "<<(a - obj.b)<<endl;
			cout<<"A*B = "<<(a * obj.b)<<endl;
			cout<<"A/B = "<<(a / obj.b)<<endl;
		}
};

class Friend
{
	int a, b;
	friend void display(Friend);                        //initialising friend function
};
void display(Friend f)
{
	f.a = 12;
	f.b = 24;
	cout<<"A = "<<f.a<<endl;                           //accessing private members of class "Friend"
	cout<<"B = "<<f.b<<endl;
}

int main()
{
	cout<<"Friend Class Application: "<<endl;
	A object;
	object.operate(); 
	cout<<endl<<"Friend Function Application:"<<endl;
	Friend F;
	display(F);
	return 0;
}
