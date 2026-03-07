#include<iostream>
using namespace std;
class Date{
    int day;
    int month;
    int year;

    public:
    Date(){

    }
    Date(int day,int month,int year):day(day),month(month),year(year)
    {

    }
    void acceptDate(){
        cout<<"day : ";
        cin>>day;
        cout<<"month : ";
        cin>>month;
        cout<<"year";
        cin>>year;
    }
    void printDate(){
        cout<<day<<"/"<<month<<"/"<<year;
    }
};
class Person{
    string name;
    string address;
    Date birthDate;

    public:
    Person()
    {

    }
    Person(string name,string address):name(name),address(address)
    {

    }
    Person(string name,string address,Date birthDate):name(name),address(address),birthDate(birthDate)
    {}
    Person(string name,string address,int day,int month,int year):name(name),address(address),birthDate(day,month,year)
    {

    }
    void acceptPerson(){
        cout<<"enter name : ";
        cin>>name;
        cout<<"enter address : ";
        cin>>address;
        cout<<"enter birthdate : ";
        this->birthDate.acceptDate();
    }
    void printPerson(){
        cout<<"name : "<<name<<endl;
        cout<<"address : "<<address<<endl;
        this->birthDate.printDate();
    }

};
class Student{
    int id;
    int marks;
    string course;
    Date joiningDate;
    Date endDate;
    Person person;
    public:
    Student(){

    }
    Student(int id,int marks,string course):
    id(id),marks(marks),course(course){}
    Student(int id,int marks,string course,Date joiningDate,Date endDate,Person Person):
    id(id),marks(marks),course(course),joiningDate(joiningDate),endDate(endDate),person(person){}
   
    void acceptStudent(){
        cout<<"enter id : ";
        cin>>id;
        cout<<"enter marks : ";
        cin>>marks;
        cout<<"enter course : ";
        cin>>course;
        cout<<"enter joining date :";
        this->joiningDate.acceptDate();
        cout<<"enter endDate : ";
        this->endDate.acceptDate();
        cout<<"enter person info : ";
        this->person.acceptPerson();
    }

    void displayStudent(){
        cout<<"id : "<<id<<endl;
        cout<<"marks : "<<marks<<endl;
        cout<<"course : "<<course<<endl;
        cout<<"joining date : ";
        this->joiningDate.printDate();
        cout<<endl;
        cout<<"Ending date : ";
        this->endDate.printDate();
        cout<<endl;
        cout<<"Person Info : ";
        this->person.printPerson();
    }
};

int main(){
    Student s1;
    s1.acceptStudent();
    s1.displayStudent();
}