#include<iostream>
using namespace std;
class Student{
    int rollNo;
    int marks;

    public:
    Student(){}
    Student(int rollNo,int marks):rollNo(rollNo),marks(marks){}
    ~Student(){
        cout<<"deleted memory successfully"<<endl;
    }

    void acceptRecord(){
        cout<<"enter roll no : ";
        cin>>this->rollNo;
        cout<<"enter marks : ";
        cin>>this->marks;
    }

    void displayRecord(){
        cout<<"Roll No : ";
        cout<<this->rollNo;
        cout<<endl<<"Marks : ";
        cout<<this->marks<<endl;
    }
    int maxMarks(int n,int max)
    {
        
        for(int i = 0;i<n;i++){
            if(max<this->marks){
                max = this->marks;
            }
        }
        return max;
    }
};
// void :: Student maxMarks(Student *pt,int n)
//     {
//         int max = 0;
//         for(int i = 0;i<n;i++){
//             if(max<pt[i].marks){
//                 max = pt[i].marks;
//             }
//         }
//         cout<<"The highest marks among student is : "<<max<<endl;
//     }

int main(){
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    Student *ptr = new Student[n];
    
    for(int i = 0;i<n;i++){
        ptr[i].acceptRecord();
    }
    for(int i = 0;i<n;i++){
        ptr[i].displayRecord();
    }
    int m,max=0;
    for(int i = 0;i<n;i++){
        max = ptr[i].maxMarks(n,max);
    }
    cout<<"highest mark is : "<<max;
    if(ptr!=NULL){
        delete []ptr;
        ptr = NULL;
        // for(int i = 0;i<3;i++){
        //     delete ptr[i];
        //     ptr[i] = NULL;

        // }
    }
}