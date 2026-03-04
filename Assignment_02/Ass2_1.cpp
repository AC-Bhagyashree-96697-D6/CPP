#include<iostream>
using namespace std;
class box{
    private:
    int length;
    int width;
    int height;

    public:
    box(){
        length = 5;
        width = 4;
        height = 7;
    }

    box(int a){
        length = a;
        width = a;
        height = a;
    }

    box(int length,int width,int height):length(length),width(width),height(height)
    {

    }

    float volume(){
        float result = this->length*this->height*this->width ;
        return result;
    }
};
int menuList(){
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.calculate area for default value"<<endl;
    cout<<"2.calculate area for same parameter value"<<endl;
    cout<<"3.calculate area for different parameter value"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    return choice;
}
int main(){
    box b;
    box b1(3);
    box b2(8,4,6);
    int choice;
    while((choice = menuList())!=0){
        switch (choice)
        {
        case 1:
           
             cout<<"volume of box from default ctor : "<< b.volume()<<endl;
            break;
        
        case 2:
            
             cout<<"volume of box from 1 paramaterized ctor : "<< b1.volume()<<endl;
            break;

        case 3:
            
            cout<<"volume of box from 3 paramaterized ctor : "<< b2.volume()<<endl;

            break;
        }
    }
    
}