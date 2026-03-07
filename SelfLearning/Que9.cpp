#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    public:
    Person(){
        name = "";
        age = 0;
    }
    Person(string name,int age):name(name),age(age){}
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
    void work()
    {}
};
class Student:public Person{
    int marks;
    public:
    Student(){
        marks = 0;
    }
    Student(string name,int age,int marks):Person(name,age),marks(marks){}
    void display(){
        Person::display();
        cout<<"Marks : "<<marks<<endl;
    }
    void work(){
        cout<<"Student is studying..."<<endl;
    }
};
class Teacher:public Person{
    string salary;
    public:
    Teacher(){
        salary = "";
    }
    Teacher(string name,int age,string salary):Person(name,age),salary(salary){}
    void display(){
        Person::display();
        cout<<"Salary : "<<salary<<endl;
    }
    void work(){
        cout<<"Teacher is teaching..."<<endl;
    }
};
int main(){
    Student st("Sakshi",20,85);
    Teacher t("Bhagyashree",30,"50000");
    st.display();
    t.display();
    st.work();
    t.work();
}