#include<iostream>
using namespace std;
class Laptop{
int brandId;
int price;
public:
Laptop(){
    brandId = 1;
    price = 50000;
    cout<<"Laptop constructor called"<<endl;
}
void display(){
    cout<<"Brand Id : "<<brandId<<endl;
    cout<<"Price : "<<price<<endl;
}
~Laptop(){
    cout<<"Laptop destructor called"<<endl;
}

};
int main(){
    Laptop l;
    l.display();
    return 0;
}