#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumrealcomplex(complex o1,complex o2);
};

class complex{
int a,b;
public:

// friend int calculator ::sumrealcomplex(complex o1,complex o2);
friend class calculator;

void setdata(int v1,int v2){
    a=v1;
    b=v2;
}

void print(){
    cout<<"complex number is  "<<a<<" + "<<b<<"i \n";
}

};


int calculator::sumrealcomplex(complex o1,complex o2){
    return (o1.a+o2.a);
}

int main(){
    complex x,y;
    x.setdata(1,2);
    y.setdata(2,3);
    calculator c;
    int l=c.sumrealcomplex(x,y);
    cout<<l;

}