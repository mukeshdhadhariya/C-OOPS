#include<iostream>
using namespace std;
class name{
int a;
public:
 name(int x){
    a=x;
 }
 name(name &x){
    cout<<"calling copy contructor: \n";
    a=x.a;
 }
 void show(){
    cout<<a;
 }
};

int main(){
    name m(5);
    name n(m);

    n.show();
    
}