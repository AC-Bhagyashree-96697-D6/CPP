#include<iostream>
using namespace std;
 
namespace college{
    
    class Student{
        int rollNo;
        int marks;

        public:
        Student(){}
        Student(int rollNo,int marks):rollNo(rollNo),marks(marks){}
        class NegativeMarkException{
            public:
            void getMessage(string message){
                cout<<message;
            }
        };

        void setRollNo(int rollNo){
            this->rollNo=rollNo;
        }
        int getRollNo(){
            cout<<this->rollNo;
        }
        
        void setMarks(int marks){
            
            if(marks<0){
                throw NegativeMarkException();
            }
            this->marks = marks;
        
    }
        int getMarks(){
            cout<<this->marks;
        }
        
        void diplayRecord(){
            cout<<"Roll No : "<<rollNo<<endl;
            cout<<"Marks : "<<marks<<endl;
        }
    };
    class Teacher{
        string name;
        string subject;

        public:
        Teacher(){
        }
        Teacher(string name,string subject):name(name),subject(subject){}
        void setName(string name){
            this->name=name;
        }
        string getName(){
            cout<<this->name;
        }
        void setSubject(string subject){
            this->subject = subject;
        }
        string getSubject(){
            cout<<this->subject;
        }
        void display(){
            cout<<"teacher's Name : "<<name;
            cout<<endl;
            cout<<"teacher's Subject : "<<subject;
        }
    };
}
using namespace college;
int main(){
    Student st;
    int rollNo,marks;
    try{
    cout<<"enter your rollno : ";
    cin>>rollNo;
    st.setRollNo(rollNo);
    cout<<"enter your marks : ";
    cin>>marks;
    st.setMarks(marks);
    }
    catch(Student :: NegativeMarkException e){
            e.getMessage("Marks cannot be negative");
            return 0;
        }

    Teacher tr;
    string name,subject;
    cout<<"enter teacher name : ";
    cin>>name;
    tr.setName(name);
    cout<<"enter the subject that they teach : ";
    cin>>subject;
    tr.setSubject(subject);

    st.diplayRecord();
    tr.display();
    
}