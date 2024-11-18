#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setdata(int a){
        this->a=a;
    }
    void getdata(){
        cout<<"number is : "<<a<<"\n";
    }
};
int main(){

    A x;
    x.setdata(3);
    x.getdata();

}