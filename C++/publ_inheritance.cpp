//public inheritance
#include <iostream>
using namespace std;

class A //base class
{
	private:
		int i,j;
	public:
		void set(int a, int b)
		{
			i = a;
			j = b;
		}	
		void show()
		{
			cout<<i<<" "<<j<<endl;
		}		
}; 

class B: public A //public inheritance
{
	private:
		int k;
	public:
		B(int x) //constructor
		{
			k = x;
		}
		void show_k()
		{
			cout<<k;
		}
};

int main()
{
	B obj(4);
	obj.set(1,5);
	obj.show();
	obj.show_k();
	return 0;
}
