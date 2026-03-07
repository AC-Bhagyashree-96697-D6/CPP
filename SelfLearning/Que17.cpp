#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    int roll;
    char name[50];
    float marks;

public:

    void accept()
    {
        cout<<"Enter Roll No: ";
        cin>>roll;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

    void save()
    {
        ofstream fout("student.dat", ios::binary);

        fout.write((char*)this, sizeof(*this));

        fout.close();

        cout<<"Student record saved successfully"<<endl;
    }

    void load()
    {
        ifstream fin("student.dat", ios::binary);

        fin.read((char*)this, sizeof(*this));

        fin.close();

        cout<<"Student record loaded successfully"<<endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.save();

    cout<<"\nLoading data from file...\n";

    Student s2;
    s2.load();
    s2.display();

    return 0;
}