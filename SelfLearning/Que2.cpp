#include<iostream>
using namespace std;
inline int fact(int num){
    return (num==1||num==0)? 1: num*fact(num-1);
}
inline int pow(int base,int index){
    int res = 1;
    for(int i = 0;i<index;i++){
        res = res*base;
    }
    return res;
}
int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    int result = fact(num);
    cout<<"the factorial of number "<<num<<" is "<<result<<endl;
    int i,b;
    cout<<"enter the base and index : ";
    cin>>b>>i;
    int r = pow(b,i);
    cout<<"the value of power is : "<<r<<endl;
}