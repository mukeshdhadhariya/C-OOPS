#include<iostream>
using namespace std;
class customer{
int a,b;
string name;

public:
customer(string name,int a,int b){
    this->name=name;
    this->a=a;
    this->b=b;
}

void deposit(int x){
    if(x>0){
        b+=x;
        cout<<x<<" rupees : Succesfully deposit\n";
    }
    else{
        throw runtime_error(" amount should be greater than 0 ");
    }
}

void withdral(int y){
    if(y>0 && y<=b){
        b-=y;
        cout<<y<<" rupees : withdral succesfully\n";
    }
    else{
        throw runtime_error("not suffecent  balance ");
    }
}

};
int main(){
    customer c("mukesh",1,100);
    try{
    c.deposit(50);
    c.withdral(-40);
    }
    catch(const runtime_error e){
        cout<<"Exception occure : "<<e.what()<<"\n";
    }

}