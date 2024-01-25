//Program to invoke derived class member through base class pointer
//To calculate whether given number is prime or not.
#include <iostream>
using namespace std;

class Prime_Num
{
	public:
		virtual void Calc_Prime()                        //Virtual function used so that the base pointer 
		{                                                //can invoke a derived member function
			cout<<"This is a virtual function."<<endl;  
		}
};

class Calculate:public Prime_Num
{
	public:
		int i, count, n;
		void Calc_Prime()                               //Virtual Function from the base class is modified here.
		{
			cout<<"Enter the number: "<<endl;
	        cin>>n;
	        count = 0;
			for (i = 1; i<=n; i++)
			{
				if (n%i == 0)
				{
					count++;
				}
			}
			if (count == 2)
			{
				cout<<"Number is Prime.";
			}
			else
			{
				cout<<"Number in not Prime.";
			}
		}
};

int main()
{
	Prime_Num *ptr;
	Calculate C;
	ptr = &C;
	ptr->Calc_Prime();
	return 0;
}
