#include<iostream>
using namespace std;

int main(){

    try{
      int *p = new  int[1000000000000000000];
        cout<<"done";
        delete []p;
    }
    catch(const exception &e){
        cout<<"exception : "<<e.what()<<"\n";
    }

}