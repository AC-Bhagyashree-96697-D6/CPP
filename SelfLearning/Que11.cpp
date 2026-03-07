#include<iostream>
using namespace std;

class LinkedList;   // forward declaration

class Node
{
    int data;
    Node* next;

public:
    Node(int d)
    {
        data = d;
        next = NULL;
    }

    friend class LinkedList;   // LinkedList can access private members
};

class LinkedList
{
    Node* head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void add_first(int value)
    {
        Node* newnode = new Node(value);

        newnode->next = head;
        head = newnode;
    }

    void add_last(int value)
    {
        Node* newnode = new Node(value);

        if(head == NULL)
        {
            head = newnode;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    void display()
    {
        Node* temp = head;

        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }

        cout<<"NULL"<<endl;
    }
};

int main()
{
    LinkedList list;

    list.add_first(30);
    list.add_first(20);
    list.add_first(10);

    list.add_last(40);
    list.add_last(50);

    cout<<"Linked List:"<<endl;
    list.display();

    return 0;
}
