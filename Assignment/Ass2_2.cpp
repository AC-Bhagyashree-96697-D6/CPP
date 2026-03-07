#include<iostream>
using namespace std;
class Tollbooth{
    private:
    int totalCars;
    double totalAmount;
    int paidCar;
    int nonPaidCar;

    public:
    Tollbooth(){
        totalCars = 0;
        totalAmount = 0;
        paidCar = 0;
        nonPaidCar = 0;
    }

    void payingCar(){
        totalAmount = totalAmount + 0.50;
        totalCars++;
        paidCar++;
    }

    void noPayCar(){
        totalAmount = totalAmount + 0;
        totalCars++;
        nonPaidCar++;
    }
    void printOnConsole(){
       cout<<"total cars passed by booth : "<<totalCars<<endl;
       cout<<"total amount collected by tollbooth : "<<totalAmount<<endl;
       cout<<"total number of car which paid the toll : "<<paidCar<<endl;
       cout<<"total number of card which passed by not paying toll : "<<nonPaidCar<<endl;
    }
};
int main(){
    Tollbooth t1;
    t1.payingCar();
    t1.noPayCar();
    t1.noPayCar();
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.printOnConsole();
}