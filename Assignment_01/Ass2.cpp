#include<iostream>
using namespace std;
struct Date
{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate(struct Date* ptrDate){
        ptrDate->day = 1;
        ptrDate->month = 1; 
        ptrDate->year = 2000;
    }
    void printDateOnConsole(struct Date* ptrDate){
        cout<<"Date : "<<ptrDate->day<<" / "<<ptrDate->month<<" / "<<ptrDate->year<<endl;
    }
    void acceptDateFromConsole(struct Date* ptrDate){
        cout<<"Enter day : ";
        cin>>ptrDate->day;
        cout<<"Enter Month : ";
        cin>>ptrDate->month;
        cout<<"Enter Year : ";
        cin>>ptrDate->year;
    }
};
int menuList()
{
    int choice;
    cout<<"1. Initialize Date\n";
    cout<<"2. Display Date On Console\n";
    cout<<"3. Accept Date From Console\n";
    cout<<"0.Exit";
    cout<<"\nEnter Your Choice : ";
    cin>>choice;
    
    return choice;
}
int main()
{
    struct Date date;
    int choice ;
    while((choice = menuList())!=0){
        switch (choice)
        {
        case 1:
            date.initDate(&date);
            break;
        
        case 2:
            date.printDateOnConsole(&date);
            break;

        case 3:
            date.acceptDateFromConsole(&date);
            break;

        case 0:
             cout<<"Thank You!";
             
        
        }
       
    }
     return 0;
}
