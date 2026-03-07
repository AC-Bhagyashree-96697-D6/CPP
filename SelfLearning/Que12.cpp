#include<iostream>
using namespace std;
class Product{
    string title;
    int price;
    public:
    Product(){

    }
    virtual void accept(){
        cout<<"enter title : ";
        cin>>title;
        cout<<"enter price : ";
        cin>>price;
    }
    virtual void display(){
        cout<<"title is : "<<title;
        cout<<"price is : "<<price;
    }
    virtual ~Product(){

    }
};
class Book : public Product{
    int pagecount;
    public:
    Book(){

    }
    virtual void accept(){
        Product::accept();
        cout<<"enter pagecount : ";
        cin>>pagecount;
    }
    virtual void display(){
        Product::display();
        cout<<"pagecount : "<<pagecount;
    }

    int getPageCount() const {
        return pagecount;
    }   
};
class Tape : public Product{
    int playtime;
    public:
    Tape(){

    }
    virtual void accept(){
        Product::accept();
        cout<<"enter playtime : ";
        cin>>playtime;
    }
    virtual void display(){
        Product::display();
        cout<<"playtime : "<<playtime;
    }
    int getPlayTime() const {
        return playtime;
    }
};
int main(){
    Product **arr = new Product*[5];
    int choice;
    for(int i=0; i<5; i++) {
    cout << "1. Book, 2. Tape, Enter choice: ";
    cin >> choice;
    switch(choice) {
    case 1:
    arr[i] = new Book;
    arr[i]->accept();
    break;
    case 2:
    arr[i] = new Tape;
    arr[i]->accept();
    break;
}
}
    cout<<"Displaying pages and playtime : "<<endl;
    for(int i=0; i<5; i++) {
        Book* bookptr = dynamic_cast<Book*>(arr[i]);
        Tape *tapeptr = dynamic_cast<Tape*>(arr[i]);

        if(bookptr != NULL){
            cout<<"pagecount : "<<bookptr->getPageCount()<<endl;
        }
        else if(tapeptr != NULL){
            cout<<"playtime : "<<tapeptr->getPlayTime()<<endl;
        }
    }

    for(int i=0;i<5;i++){
    delete arr[i];
     }
    delete[] arr;
    return 0;
}