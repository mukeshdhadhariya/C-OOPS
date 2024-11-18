#include<iostream>
using namespace std;

class simple{
    int a,b,c;
    public:
    simple(int x,int y=8,int z=2){
        a=x;
        b=y;
        c=z;
    }
    void print(){
        cout<<a<<" "<<b<<" "<<c<<'\n';
    }
};

int main(){
    simple s(1,2,3);
    s.print();
    simple s1(1);
    s1.print();
}