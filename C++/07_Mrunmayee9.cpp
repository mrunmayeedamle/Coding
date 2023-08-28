//Program to illustrate operator overloading and function overloading
#include <iostream>
using namespace std;
class func_over
{
    public:
    void add(int a, int b)                                 //add function w/ int parameters
    {
        cout<<"Sum of integers: "<<(a+b)<<endl;
    }
    void add(float c, float d)                             //add function w/ float parameters
    {
        cout<<"Sum of floating point numbers: "<<(c+d)<<endl<<endl;
    }
};
class opt_over
{
    int real, imag;
    public:
    opt_over(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    opt_over operator+(opt_over const &obj)              //definition of operator +
    {                                                    //being overloaded
        opt_over res;
        res.real =  real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void display()
    {
        cout<<real<<" +"<<imag<<"i";
    }

};
int main()
{
    cout<<"Exectuting function overloading: "<<endl;
    int a, b;
    float c, d;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    cout<<"Enter two floating point integers: "<<endl;
    cin>>c>>d;
    func_over F;
    F.add(a,b);                                            //both add functions overloaded 
    F.add(c,d);                                            //due to varying input types
    cout<<"Exectuting operator overloading: "<<endl;
    int r1, r2, i1, i2;
    cout<<"Enter the complex number (real and imaginary numbers): "<<endl;
    cin>>r1>>i1;
    cin>>r2>>i2;
    opt_over o1(r1, i1);
    opt_over o2(r2, i2);
    opt_over o3 = o1 + o2;                                 //using + to add 2 objects
    o3.display();
    return 0;
}