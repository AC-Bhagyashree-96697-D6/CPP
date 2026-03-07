#include<iostream>
using namespace std;
class word{
    string str;
    public:
    void accept(){
        cout<<"enter string : ";
        cin>>str;
    }
    void strlen(){
        int count = 0;
        for(int i = 0;str[i]!='\0';i++){
            count++;
        }
        cout<<"length of string is : "<<count<<endl;;
    }
    void strcpy(){
        string copy="";
        for(int i = 0;str[i]!='\0';i++){
            copy+=str[i];  // copy = copy + str[i];
        }
        cout<<"copied string is : "<<copy;
    }
};
int main(){
    word w;
    w.accept();
    w.strlen();
    w.strcpy();
    return 0;
}