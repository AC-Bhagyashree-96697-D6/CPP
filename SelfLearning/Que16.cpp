#include<iostream>
using namespace std;

class Student
{
    int roll;

public:
    void accept()
    {
        cout<<"Enter roll: ";
        cin>>roll;

        if(roll < 0)
            throw "Invalid Roll Number";
    }

    void display()
    {
        cout<<"Roll: "<<roll<<endl;
    }
};


class SmartPtr
{
    Student *ptr;

public:
    SmartPtr(Student *p)
    {
        ptr = p;
    }

    Student* operator->()
    {
        return ptr;
    }

    ~SmartPtr()
    {
        delete ptr;
        cout<<"Memory released automatically"<<endl;
    }
};

int main()
{
    try
    {
        SmartPtr s(new Student);

        s->accept();
        s->display();
    }
    catch(...)
    {
        cout<<"Invalid input"<<endl;
    }

    return 0;
}