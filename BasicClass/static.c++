#include<iostream>
using namespace std;

class employee{
int id;
static int cnt;
public:
void setid(int a){
    id=a;
    cnt++;
}
void getid(){
    cout<<id<<" "<<cnt<<"\n";
}
static void getcnt(){
    cout<<"count of person is : "<<cnt<<"\n";
}
};

int employee::cnt;

int main(){
    employee mukesh;
    employee mukesh1;
    
    mukesh.setid(1000000);
    mukesh.getid();
    employee::getcnt();
    mukesh1.setid(2000000);
    mukesh1.getid();
    employee::getcnt();
}