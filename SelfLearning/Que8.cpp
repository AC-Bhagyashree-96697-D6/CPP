#include<iostream>
using namespace std;
class Programmer{
    string programmingLanguage;
    int experience;
    public:
    Programmer(){
        programmingLanguage = "C++";
        experience = 2;
        cout<<"Programmer Constructor called"<<endl;
    }
    Programmer(string programmingLanguage,int experience):programmingLanguage(programmingLanguage),experience(experience){
        cout<<"Programmer Constructor called"<<endl;
    }
    void displayProgrammer(){
        cout<<"Programming Language : "<<programmingLanguage<<endl;
        cout<<"Experience : "<<experience<<" years"<<endl;
    }
    void work(){
        cout<<"Programmer is working..."<<endl;
    }
};
class Student{
    int rollNo;
    string name;
    public:
    Student(){
        rollNo = 4;
        name = "Sakshi";
        cout<<"Student Constructor called"<<endl;
    }
    Student(int rollNo,string name):rollNo(rollNo),name(name){
        cout<<"Student Constructor called"<<endl;
    }
    void displayStudent(){
        cout<<"Roll No : "<<rollNo<<endl;
        cout<<"Name : "<<name<<endl;
    }
    void work(){
        cout<<"Student is studying..."<<endl;
    }
};
class ProgrammingTeacher:public Programmer,public Student{
    string name;
    string subject;
    public:
    ProgrammingTeacher(){
        name = "";
        subject = "";
        cout<<"Programming Teacher Constructor called"<<endl;
    }
    ProgrammingTeacher(string name,string subject):name(name),subject(subject){
        cout<<"Programming Teacher Constructor called"<<endl;
    }
    void displayProgrammingTeacher(){
        cout<<"Name : "<<name<<endl;
        cout<<"Subject : "<<subject<<endl;
    }

};
int main(){
    ProgrammingTeacher pt("Bhagyashree Bhagat","C++");
    pt.displayProgrammingTeacher();
    pt.displayProgrammer();
    pt.displayStudent();
    
   // pt.work();//this is giving compile time error as compiler is getting confuse about which function to call from class programmer or student
   //therefore we are usig scope resolution operator

   pt.Programmer::work();
   pt.Student::work();
    return 0;
}