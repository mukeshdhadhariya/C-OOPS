#include<iostream>
using namespace std;
class Y;

class X{
int x;
public:
friend void exchange(X &,Y &);
void setdata(int b){
    x=b;
}
void print(){
    cout<<x;
}
};

class Y{
int y;
public:
friend void exchange(X &,Y &);
void setdata(int a){
    y=a;
}
void print(){
    cout<<y;
}
};

void exchange(X &o1,Y &o2){
    auto temp=o1.x;
    o1.x=o2.y;
    o2.y=temp;
}

int main(){
    X F;
    Y E;
    F.setdata(2);
    E.setdata(3);
    exchange(F,E);
    
    F.print();


}