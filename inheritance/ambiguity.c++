#include<iostream>
using namespace std;

class base1{
    int a;
    public:
    void greet(){
        cout<<"hello bhai "<<"\n";
    }
};

class base2{
    int a;
    public:
    void greet(){
        cout<<"how are you ? "<<"\n";
    }
};

class derived : public base1,public base2{
public:
void greet(){
    base2 :: greet();
}
};

int main(){
    derived a;
    a.greet();

}