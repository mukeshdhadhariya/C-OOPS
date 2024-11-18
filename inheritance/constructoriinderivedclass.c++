#include<iostream>
using namespace std;

class base1{
    int a;
    public:
    base1(int i=5){
        a=i;
        cout<<"number is : "<<a<<"\n";
        cout<<"called base class 1 "<<"\n";
    }
};

class base2{
    int a;
    public:
    base2(int i=8){
        a=i;
       cout<<"number is : "<<a<<"\n";
        cout<<"called base class 2 "<<"\n";
    }
};

class derived:public base1, public base2{
int l;
public:
derived(int x,int y,int z):base1(x),base2(y){
l=z;
cout<<" number is "<<z<<"\n";
cout<<"called derived  class "<<"\n";
}
};

int main(){
    derived f(4,3,5);

}