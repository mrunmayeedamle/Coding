//Program to illustrate order of execution of constructors and destructors
//in multiple inheritance
#include <iostream>
using namespace std;

class Base_A
{
	public:
		Base_A(int x, int y)
		{
			cout<<"Base A constructor initialized."<<endl;
			cout<<"Sum of Values passed to Base A: "<< x+y <<endl<<endl;
		}
		~Base_A()
		{
			cout<<"Base A destructed."<<endl;
		}
};

class Base_B
{
	public:
		Base_B(string str)
		{
			cout<<"Base B constructor initialized."<<endl;
			cout<<"String passed to Base B: "<< str <<endl<<endl;
		}
		~Base_B()
		{
			cout<<"Base B destructed."<<endl;
		}
};

class Derived:public Base_A, public Base_B
{
	public:
		Derived(int x, int y, string str, float i): Base_A(x,y), Base_B(str)
		{
			cout<<"Derived constructor initialized."<<endl;
			cout<<"Value passed to Derived: "<<i<<endl<<endl;
		}
		~Derived()
		{
			cout<<"Derived destructed."<<endl;
		}
};

int main()
{
	Derived D(1,2,"Hello", 28.98);
}
