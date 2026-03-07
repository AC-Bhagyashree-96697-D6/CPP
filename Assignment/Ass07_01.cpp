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

    Employee(int i,double s)
    {
        id = i;
        salary = s;
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

    virtual ~Employee(){}
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

    Manager(int i,double s,double b):Employee(i,s)
    {
        bonus = b;
    }

    void accept()
    {
        Employee::accept();
        cout<<"Enter Bonus: ";
        cin>>bonus;
    }

    void display()
    {
        Employee::display();
        cout<<"Bonus: "<<bonus<<endl;
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

    Salesman(int i,double s,double c):Employee(i,s)
    {
        commission = c;
    }

    void accept()
    {
        Employee::accept();
        cout<<"Enter Commission: ";
        cin>>commission;
    }

    void display()
    {
        Employee::display();
        cout<<"Commission: "<<commission<<endl;
    }
};

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager(){}

    SalesManager(int i,double s,double b,double c)
    {
        id=i;
        salary=s;
        bonus=b;
        commission=c;
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
    Employee* arr[100];
    int count = 0;
    int choice;

    do
    {
        cout<<"\n1. Add Manager";
        cout<<"\n2. Add Salesman";
        cout<<"\n3. Add SalesManager";
        cout<<"\n4. Display Count";
        cout<<"\n5. Display All Managers";
        cout<<"\n6. Display All Salesman";
        cout<<"\n7. Display All SalesManagers";
        cout<<"\n0. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            arr[count] = new Manager();
            arr[count]->accept();
            count++;
            break;

        case 2:
            arr[count] = new Salesman();
            arr[count]->accept();
            count++;
            break;

        case 3:
            arr[count] = new SalesManager();
            arr[count]->accept();
            count++;
            break;

        case 4:
        {
            int m=0,s=0,sm=0;

            for(int i=0;i<count;i++)
            {
                if(dynamic_cast<SalesManager*>(arr[i])!=NULL)
                    sm++;
                else if(dynamic_cast<Manager*>(arr[i])!=NULL)
                    m++;
                else if(dynamic_cast<Salesman*>(arr[i])!=NULL)
                    s++;
            }

            cout<<"Managers: "<<m<<endl;
            cout<<"Salesman: "<<s<<endl;
            cout<<"SalesManagers: "<<sm<<endl;
            break;
        }

        case 5:
            for(int i=0;i<count;i++)
            {
                Manager* m = dynamic_cast<Manager*>(arr[i]);
                if(m!=NULL && dynamic_cast<SalesManager*>(arr[i])==NULL)
                {
                    m->display();
                    cout<<endl;
                }
            }
            break;

        case 6:
            for(int i=0;i<count;i++)
            {
                Salesman* s = dynamic_cast<Salesman*>(arr[i]);
                if(s!=NULL && dynamic_cast<SalesManager*>(arr[i])==NULL)
                {
                    s->display();
                    cout<<endl;
                }
            }
            break;

        case 7:
            for(int i=0;i<count;i++)
            {
                SalesManager* sm = dynamic_cast<SalesManager*>(arr[i]);
                if(sm!=NULL)
                {
                    sm->display();
                    cout<<endl;
                }
            }
            break;
        }

    }while(choice!=0);

    return 0;
}