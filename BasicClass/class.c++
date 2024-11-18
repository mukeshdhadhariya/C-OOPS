#include<iostream>
using namespace std;

class Employee{
private:
int a,b,c;
public:
int d,e;
void setdata(int a1,int b1,int c1);
void getdata(){
    cout<<"value of a  b   c   d   e :  "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" ";
}
};

void Employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
Employee mukesh;
mukesh.setdata(2,3,4);
mukesh.d=1;
mukesh.e=2;
mukesh.getdata();
}