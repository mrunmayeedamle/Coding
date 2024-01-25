//Program to demonstrate Virtual function and Virtual Base Class
#include <iostream>
using namespace std;

class Base
{
public:
    int n;
    void display()
    {
        cout << "Base class initialized." << endl;
        n = 10;
    }
    virtual void disp() = 0; // pure virtual declaration
};

class Der1 : virtual public Base // base declared as virtual
{
public:
    Der1()
    {
        cout << "Derived 1 class initialized" << endl;
        cout << "Derived 1 contains one copy of base." << endl
             << endl;
    }
    void disp()
    {
        cout << "Pure virtual function modified in derived 1." << endl;
        cout << "N = " << n << endl
             << endl;
    }
};
class Der2 : virtual public Base // base declared as virtual
{
public:
    Der2()
    {
        cout << "Derived 2 class initialized" << endl;
        cout << "Derived 2 contains one copy of base." << endl;
    }
};

class Derived : public Der1, public Der2
{
public:
    Derived()
    {
        cout << "Derived should contain 2 copies of base but: " << endl;
        cout << "Derived contains only one copy of base." << endl;
    }
};

int main()
{
    cout << "Pure Virtual function implementation: " << endl;
    Base *ptr;
    Der1 derived;
    ptr = &derived;
    ptr->display();
    ptr->disp();
    cout << "Virtual Class implementation: " << endl;
    Derived obj;
    obj.display();
    obj.disp();
    cout << "N = " << obj.n << endl;
    return 0;
}
