#include<iostream>
using namespace std;

class employee{
public:
int a=5;
int salary;
employee(int sal){
    salary=sal;
}
employee(){}
};

class programmer : public employee{
    public:
    programmer(int s){
        salary=s;
    }
    void getdata(){
        cout<<salary;
    }
    int lang =9;
};



int main(){

    employee x(500000);
    cout<<x.salary<<"\n";

    programmer y(900000);
    cout<<y.lang<<"\n";
    cout<<y.a<<"\n";
    y.getdata();


}