#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    // test(int i,int j):a(i),b(j){
    // test(int i,int j):a(i),b(i+j){
    test(int i,int j):a(i),b(a+j){
        cout<<a<<"\n"<<b;
    }
};

int main(){

    test t(3,4);

}