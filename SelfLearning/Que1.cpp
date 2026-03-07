#include<iostream>
using namespace std;
void swapByValue(int *x,int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swapByReference(int &num1,int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    int x = 10;
    int y = 20;
    cout<<"Before swap by value :";
    cout<<x<<"  "<<y<<endl;
    swapByValue(&x,&y);
    cout<<"After swap by value : ";
    cout<<x<<"  "<<y<<endl;
    cout<<"Before swap by reference : ";
    cout<<x<<"  "<<y<<endl;;
    swapByReference(x,y);
      cout<<"After swap by Reference : ";
    cout<<x<<"  "<<y<<endl;
}