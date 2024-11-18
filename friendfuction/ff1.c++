#include<iostream>
using namespace std;

class complex{
int a,b;
public:

friend complex sumcomplex(complex a1,complex b1);

void setdata(int v1,int v2){
    a=v1;
    b=v2;
}

void print(){
    cout<<"complex number is  "<<a<<" + "<<b<<"i \n";
}

};

complex sumcomplex(complex a1,complex b1){
    complex c;
    c.setdata((a1.a+b1.a),(a1.b+b1.b));
    return c;
}
int main(){
    complex x,y,z;

    x.setdata(1,2);
    x.print();

    y.setdata(8,8);
    y.print();

    z=sumcomplex(x,y);
    z.print();
    



}