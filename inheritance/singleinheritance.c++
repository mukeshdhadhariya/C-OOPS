#include<iostream>
using namespace std;

class base{
int data1;
public:
int data2;
void setdata();
int getdata1();
int getdata2();
};

void base :: setdata(){
    data1=10;
    data2=20;
}

int base :: getdata1(){
    return data1;
}

int base :: getdata2(){
    return data2;
}

class derived :private base{
int data3;
public:

void process();
void display();
};

void derived :: process(){
    setdata();
    data3=getdata1()*data2;
}

void derived :: display(){
    cout<<" data 1 : "<<getdata1()<<"\n";
    cout<<" data 2 : "<<data2<<"\n";
    cout<<" data 3 : "<<data3<<"\n";
}

int main(){

    derived d1;

    //if base class mode is public in drived class
    // d1.setdata();
    
    d1.process();
    d1.display();

}