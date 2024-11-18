#include<iostream>
using namespace std;

class complex{
int a,b;
public:
void setdata(int v1,int v2){
    a=v1;
    b=v2;
}
void setdatabysum(complex o1,complex o2){
    a=o1.a + o2.a;
    b=o1.b + o2.b;
}
void print(){
    cout<<"complex number is = "<<a<<" + "<<b<<"i \n";
}

};
int main(){
    complex x,y,z;

    x.setdata(1,2);
    x.print();

    y.setdata(8,8);
    y.print();

    z.setdatabysum(x,y);
    z.print();



}