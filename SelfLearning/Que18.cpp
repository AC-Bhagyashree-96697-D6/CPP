#include<iostream>
using namespace std;

template <class T>
class Array
{
    T *arr;
    int size;

public:

    Array(int s)
    {
        size = s;
        arr = new T[size];   // dynamic allocation
    }

    ~Array()
    {
        delete[] arr;        // prevent memory leak
    }

    void accept()
    {
        cout<<"Enter "<<size<<" elements:"<<endl;

        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }

    void display()
    {
        cout<<"Array elements:"<<endl;

        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    // operator overloading for index access
    T& operator[](int index)
    {
        return arr[index];
    }
};

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    Array<int> a(n);  // create an array of integers

    a.accept();
    a.display();

    cout<<"Access element using [] operator: "<<a[1]<<endl;

    return 0;
}