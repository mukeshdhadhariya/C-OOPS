#include<iostream>
#include<math.h>
using namespace std;

class complex{
    int a,b;
    public:
    friend void distance(complex,complex);
    complex(void);
    void print(){
       cout<<"("<<a<<" , "<<b<<")\n";
    }

};
complex::complex(){
   int x,y;
   cout<<"enter points : ";
   cin>>x>>y;
   a=x;
   b=y;
}

void distance(complex c,complex d){
    int x1=c.a;
    int y1=c.b;

    int x2=d.a;
    int y2=d.b;

    x1=x1-x2;
    y1=y1-y2;

    x1=x1*x1;
    y1=y1*y1;

    x1=x1+y1;

    cout<<sqrt(x1)<<"\n";
}

int main(){
    complex c;
    c.print();
    complex d;
    d.print();
    distance(c,d);

}