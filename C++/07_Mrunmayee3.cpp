//Program illustrating various forms of inheritance
//Multiple and Multilevel Inheritance to do arithmetic operations on 2 numbers
#include <iostream>
using namespace std;
class A
{
	public:
		float a;
		void set_a()
		{
		cout<<"Entering A: "<<endl;
		cin>>a;
		}
};

class B
{
	public:
		float b;
		void set_b()
		{
			cout<<"Entering B: "<<endl;
			cin>>b;
		}
};

class Operate: public A, public B
{
	public:
		float calc_sum()
		{
			return a + b;
		}
		float calc_diff()
		{
			return a - b;
		}
		float calc_prod()
		{
			return a * b;
		}
		float calc_div()
		{
			return a / b;
		}
};
class B1: public A
{
	public:
		float c;
		void set_c()
		{
			cout<<"Entering C: "<<endl;
			cin>>c;
		}
};
class B2:public B1
{
	public:
		float d;
		void set_d()
		{
			cout<<"Entering D: "<<endl;
		    cin>>d;
		}
		void Operate()
		{
			cout<<"Addition: "<<(a + c) + d<<endl;
			cout<<"Subtraction: "<<(a - c) - d<<endl;
			cout<<"Multiplication: "<<(a * c) * d<<endl;
			cout<<"Division: "<<(a / c) / d<<endl;
		}
		
};
int main()
{
	cout<<"Multiple Inheritance: "<<endl<<endl;
	
	Operate Obj;
	Obj.set_a();
	Obj.set_b();
	cout<<"Sum = "<<Obj.calc_sum()<<endl;
	cout<<"Difference = "<<Obj.calc_diff()<<endl;
	cout<<"Product = "<<Obj.calc_prod()<<endl;
	cout<<"Division = "<<Obj.calc_div()<<endl;
	
	cout<<"Multilevel Inheritance: "<<endl<<endl;
	B2 b;
	b.set_a();
	b.set_c();
	b.set_d();
	b.Operate();	
	return 0;
}

