#include<iostream>
using namespace std;

class base{
protected:
int a=10;
private:
int b;
};

class derived :protected base{
    public:
    void getdata(){
        cout<<a<<"\n";
    }

};

int main(){

    base b;
    derived d;
    d.getdata();


    
}