#include<iostream>
using namespace std;

class base1{
    protected:
    int a;
    public:
    void setdata(int x){
        a=x;
    }
};

class base2{
    protected:
    int b;
    public:
    void setdata2(int y){
        b=y;
    }
};

class derived : public base1 ,public base2{
public:
void show(){
    cout<<"first number : "<<a<<"\n";
    cout<<"first number : "<<b<<"\n";
    cout<<"sum of both : "<<a+b<<"\n";
}
};

int main(){
derived z;
z.setdata(10);
z.setdata2(5);
z.show();

}