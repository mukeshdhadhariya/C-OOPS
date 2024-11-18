#include<iostream>
using namespace std;

class employee{
string name;
int salary;
public:
void setname(){
    salary=10000000;
    cout<<"\n Enter your name : ";
    cin>>name;
}
void getid(){
    cout<<name<<"\n";
    cout<<salary<<"\n";
}

};

int main(){
    employee mgh[4];
    for(int i=0;i<4;i++){
        mgh[i].setname();
    }
    for(int i=0;i<4;i++){
        mgh[i].getid();
        cout<<"\n"; 
    }
}