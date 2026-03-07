#include<iostream>
using namespace std;

class BankAccount{
    int accountNo;
    string accountHolderName;
    double balance;

public:
    BankAccount(){
        accountNo = 0;
        accountHolderName = "";
        balance = 0.0;
    }

    BankAccount(int accountNo,string accountHolderName,double balance):accountNo(accountNo),accountHolderName(accountHolderName),balance(balance){}

    void displayAccountDetails(){
        cout<<"Account No : "<<accountNo<<endl;
        cout<<"Account Holder Name : "<<accountHolderName<<endl;
        cout<<"Balance : "<<balance<<endl;
    }

    void withdraw()
    {   double amount;
        cout<<"Enter amount to withdraw : ";
        cin>>amount;
           if(amount>balance){
                throw "Insufficient balance";
            }
            else{
            this->balance= this->balance-amount;
            cout<<"Amount withdrawn successfully"<<endl;
            }
    }
    void deposit(){
        double amount;
        cout<<"Enter amount to deposit : ";
        cin>>amount;
        if(amount<0){
            throw amount;
        }
        this->balance = this->balance + amount;
        cout<<"Amount deposited successfully"<<endl;
    }

};
int menuList(){
    int choice;
    cout<<"1. Display Account Details"<<endl;
    cout<<"2. Withdraw"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    return choice;
}
int main(){
    int choice;
    BankAccount ac(12345,"Bhagyashree Bhagat",1500.0);
    while((choice = menuList())!=4){
        
        switch(choice){
            case 1:
                ac.displayAccountDetails();
                break;
            case 2:
                try{
                    ac.withdraw();
                }
                catch(string msg){
                    cout<<msg<<endl;
                }
                break;
            case 3:
                try{
                    ac.deposit();
                }
                catch(double amount){
                    cout<<"Invalid deposit amount: "<<amount<<endl;
                }
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
   
}