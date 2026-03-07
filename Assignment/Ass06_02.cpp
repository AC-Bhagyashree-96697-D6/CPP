#include<iostream>
using namespace std;

class Employee
{
protected:
    int id;
    double salary;

public:
    Employee()
    {
        id = 0;
        salary = 0;
    }

    Employee(int i, double s)
    {
        id = i;
        salary = s;
    }

    void setId(int i)
    {
        id = i;
    }

    int getId()
    {
        return id;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    virtual void accept()
    {
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Salary: ";
        cin>>salary;
    }

    virtual void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Manager : virtual public Employee
{
protected:
    double bonus;

public:
    Manager()
    {
        bonus = 0;
    }

    Manager(int i,double s,double b) : Employee(i,s)
    {
        bonus = b;
    }

    void setBonus(double b)
    {
        bonus = b;
    }

    double getBonus()
    {
        return bonus;
    }

    void acceptManager()
    {
        Employee::accept();
        cout<<"Enter Bonus: ";
        cin>>bonus;
    }

    void displayManager()
    {
        Employee::display();
        cout<<"Bonus: "<<bonus<<endl;
    }

    void accept()
    {
        acceptManager();
    }

    void display()
    {
        displayManager();
    }
};

class Salesman : virtual public Employee
{
protected:
    double commission;

public:
    Salesman()
    {
        commission = 0;
    }

    Salesman(int i,double s,double c) : Employee(i,s)
    {
        commission = c;
    }

    void setCommission(double c)
    {
        commission = c;
    }

    double getCommission()
    {
        return commission;
    }

    void acceptSalesman()
    {
        Employee::accept();
        cout<<"Enter Commission: ";
        cin>>commission;
    }

    void displaySalesman()
    {
        Employee::display();
        cout<<"Commission: "<<commission<<endl;
    }

    void accept()
    {
        acceptSalesman();
    }

    void display()
    {
        displaySalesman();
    }
};

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
    }

    SalesManager(int i,double s,double b,double c)
    {
        id = i;
        salary = s;
        bonus = b;
        commission = c;
    }

    void accept()
    {
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Salary: ";
        cin>>salary;
        cout<<"Enter Bonus: ";
        cin>>bonus;
        cout<<"Enter Commission: ";
        cin>>commission;
    }

    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Commission: "<<commission<<endl;
    }
};

int main()
{
    cout<<"----- Manager -----"<<endl;
    Manager m;
    m.accept();
    m.display();

    cout<<"\n----- Salesman -----"<<endl;
    Salesman s;
    s.accept();
    s.display();

    cout<<"\n----- SalesManager -----"<<endl;
    SalesManager sm;
    sm.accept();
    sm.display();

    return 0;
}