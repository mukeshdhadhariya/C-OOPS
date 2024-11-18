#include<iostream>
using namespace std;
class Y;

class X{
int x;
public:
friend void add(X,Y);
void setdata(int b){
    x=b;
}
};

class Y{
int y;
public:
friend void add(X,Y);
void setdata(int a){
    y=a;
}
};

void add(X o1,Y o2){
    cout<<o1.x+o2.y;
}

int main(){
    X F;
    Y E;
    F.setdata(2);
    E.setdata(3);
    add(F,E);


}