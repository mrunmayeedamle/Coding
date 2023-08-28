//Program illustrating pointers to object classes for student class
#include <iostream>
using namespace std;

class Student
{
    int Roll_no;
    string Name;
    float Marks;
    public:
    Student()
    {
        cout<<"ENTERING STUDENT INFO: "<<endl<<endl;
    } 
    void set_data()
    {
        cout<<"Enter Roll No: "<<endl;
        cin>>Roll_no;
        cout<<"Enter Name: "<<endl;
        cin>>Name;
        cout<<"Marks: "<<endl;
        cin>>Marks;
        cout<<endl;
    }
    void display_data()
    {
        cout<<"Roll No: "<<Roll_no<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Marks: "<<Marks;
    }
};
int main()
{
    Student obj, *ptr;
    ptr = &obj;
    ptr->set_data();
    ptr->display_data();
    return 0;
}