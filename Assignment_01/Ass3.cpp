#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate(){
        day = 1;
        month = 1;
        year = 2000;
    }
    void printDateOnConsole(){
        cout<<"Date : "<<day<<" / "<<month<<" / "<<year<<endl;
    }
    void acceptDateFromConsole(){
        cout<<"Enter day : ";
        cin>>day;
        cout<<"Enter month : ";
        cin>>month;
        cout<<"Enter year : ";
        cin>>year;
    }
    bool isLeapYear(){
        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return true;
            }
        }
        else{
            return false;
        }
    }

};

int menuList()
{
    int choice;
    cout<<"1. Initialize date "<<endl;
    cout<<"2. Print date on console"<<endl;
    cout<<"3. Accept date from console"<<endl;
    cout<<"4. Check if the year is a leap year"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    return choice;
}

int main()
{
    Date d;
    int choice;
    while((choice = menuList()) != 0)
    {
        switch(choice)
        {
            case 1:
                d.initDate();
                break;
            case 2:
                d.printDateOnConsole();
                break;
            case 3:
                d.acceptDateFromConsole();
                break;
            case 4:
                if(d.isLeapYear()){
                    cout<<"The year is a leap year."<<endl;
                }
                else{
                    cout<<"The year is not a leap year."<<endl;
                }
               
        }
    }

    return 0;
}