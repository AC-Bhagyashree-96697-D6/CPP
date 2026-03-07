#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:

    void accept()
    {
        cout<<"Enter matrix elements:"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return temp;
    }

    Matrix operator-(Matrix m)
    {
        Matrix temp;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }
        return temp;
    }

    Matrix operator*(Matrix m)
    {
        Matrix temp;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j] = 0;

                for(int k=0;k<3;k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        return temp;
    }
};

int main()
{
    Matrix m1,m2,m3;

    cout<<"Enter First Matrix"<<endl;
    m1.accept();

    cout<<"Enter Second Matrix"<<endl;
    m2.accept();

    cout<<"\nMatrix Addition"<<endl;
    m3 = m1 + m2;
    m3.display();

    cout<<"\nMatrix Subtraction"<<endl;
    m3 = m1 - m2;
    m3.display();

    cout<<"\nMatrix Multiplication"<<endl;
    m3 = m1 * m2;
    m3.display();

    return 0;
}