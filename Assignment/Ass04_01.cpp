#include<iostream>
using namespace std;
class Time{
    int hr;
    int min;
    int sec;
    public:
    Time(){

    }
    Time(int h,int m,int s):hr(h),min(m),sec(s){

    }
    int getHour(){
        return this->hr;
    }
    void setHour(void){
            
            cout<<"enter hour: ";
            cin>>this->hr;
            
    }
    int getMin(){
        return this->min;
    }
    void setMin(){
        cout<<"enter Min: ";
            cin>>this->min;
    }
    int getSec(){
        return this->hr;
    }
    void setSec(){
        cout<<"enter Sec: ";
            cin>>this->min;
    }


    void print(){
        cout<<"Hr : "<<hr<<"Min : "<<min<<"Sec : "<<sec;
    }

};

int menuList(){
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Add Time"<<endl;
    cout<<"2.Display all time"<<endl;
    cout<<"3.Display only hours of all time object"<<endl;
    cout<<"enter the choice : "<<endl;
    cin>>choice;
    return choice;
}

int main(){
    Time *t1 = new Time[2];
//     if(t1!=NULL){
//         for(int i = 0;i<2;i++){
//             t1[i] = new Time[3];
//         }
    
//     int choice;
    // while((choice=menuList())!=0){
    //     switch(choice) {
    //         case 1:
    //         cout<<"enter hr : ";
            
    //     }
    // }
// }
    int choice;
     while((choice=menuList())!=0){
        switch(choice) {
            case 1:
                for(int i = 0;i<2;i++){
                    t1[i].setHour();
                    t1[i].setMin();
                    t1[i].setSec();
                }

            case 2:
                for(int i = 0;i<2;i++){
                  t1[i].print();
                }
            
            case 3:
                for(int i = 0;i<2;i++){
                    cout<<t1[i].getHour()<<endl;
                }    
        }
    }
    delete []t1;
    t1 = NULL; 
}
