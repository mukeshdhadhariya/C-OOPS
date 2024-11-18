#include<iostream>
using namespace std;

class shop{
int id;
int price;
public:
void setdata(int a,int b){
    id=a;
    price=b;
}
void getdata(){
cout<<"code of this item  "<<id<<"\n";
cout<<"price of this item "<<price<<"\n";
}

};

int main(){
    int size=2;
    shop *ptr=new shop[size];
    shop *p=ptr;
    for(int i=0;i<size;i++){
        int p,q;
        cout<<"enter id and price of item "<<i+1;
        cin>>p>>q;
        (*ptr).setdata(p,q);
        ptr++;
    }
    cout<<"\n";
    // for(int i=0;i<size;i++){
    //     cout<<"enter id and price of item "<<i+1;
    //     (*p).getdata();
    //      p++;
    //      cout<<"\n";
    // }

    for(int i=0;i<size;i++){
        ptr--;
        cout<<"enter id and price of item "<<i+1;
        (*ptr).getdata();
         cout<<"\n";
    }

}