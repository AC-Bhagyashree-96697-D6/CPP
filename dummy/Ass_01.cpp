#include<iostream>
using namespace std;
class Cylinder{
    const static double PI ;
    double radius;
    double height;
    public :
    Cylinder(){

    }
    Cylinder(double radius,double height):radius(radius),height(height)
    {}
    double getRadius(){
        return radius;
    }
    double getHeight(){
        return height;
    }
    void setRadius(int radius){
        this->radius = radius;
    }
    void setHeight(int radius){
        this->height = height;
    }
    double Volume(){
        double volume = this->radius*this->height*PI;
        return volume;
    }
    
};

const double Cylinder :: PI=3.14;


int main(){
    Cylinder c1(3.1,6.2);
    double res = c1.Volume();
    cout<<"volume of a cylinder is : "<<res<<endl;
}