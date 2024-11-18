#include<iostream>
using namespace std;

int cnt=0;

class simple{
    public:
    simple(){
        cout<<"constrctor\n";
        cnt++;
    }
    
    ~simple(){
        cout<<"destrctor\n";
        cnt--;
    }
};

int main(){
    simple a;
    {
        simple b,c;
    }
    
}