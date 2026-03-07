#include<iostream>
#include<memory>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Object Created" << endl;
    }
    ~Demo() {
        cout << "Object Destroyed" << endl;
    }
    void show() {
        cout << "Demo function called" << endl;
    }
};

int main() {

    cout << "----- unique_ptr Example -----" << endl;

    unique_ptr<Demo> p1(new Demo());

    // ownership transfer
    unique_ptr<Demo> p2 = move(p1);

    if(!p1)
        cout << "p1 is now empty after ownership transfer" << endl;

    p2->show();


    cout << "\n----- shared_ptr Example -----" << endl;

    shared_ptr<Demo> sp1(new Demo());
    shared_ptr<Demo> sp2 = sp1;   // shared ownership

    cout << "Reference count: " << sp1.use_count() << endl;

    sp2->show();


    cout << "\n----- weak_ptr Example -----" << endl;

    weak_ptr<Demo> wp = sp1;   // non-owning reference

    cout << "Weak pointer created" << endl;

    if(auto temp = wp.lock())  // check if object still exists
    {
        temp->show();
        cout << "Object still exists" << endl;
    }

    return 0;
}