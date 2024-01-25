//protected inheritance
#include <iostream>
using namespace std;

class A //base class
{
	private:
		int i;
	protected:
		int j;
	public:
		int k;
		void set_i(int a)
		{
			i = a;
		}	
		int get_i()
		{
			return i;
		}		
}; 

class B: protected A //protected inheritance
{
	public:
		void set_j(int a)
		{
			j = a;
		}
		void set_k(int a)
		{
			k = a;
		}
		int get_j()
		{
			return j;
		}
		int get_k()
		{
			return k;
		}
};

int main()
{
	B obj;
	// obj.set_i(10); //error no access
	// cout<<obj.get_i(); //error, no access
	// obj.k = 25; //error, no access
	
	obj.set_j(20);
	cout<<obj.get_j()<<endl;
	
	obj.set_k(30);
	cout<<obj.get_k();
	return 0;
}
