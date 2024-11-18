#include<iostream>
using namespace std;

class binary{
string s;
void check();
int cnt=0;

public:
void read();
void ones();
};

void binary :: read(){
    cout<<"checkeing binary\n";
    cin>>s;
}

void binary :: check(){
    int i=s.length();
    while(i--){
        if(s[i]!='0' and s[i]!='1'){
            cout<<"not binary\n";
            break;
        }
    }
}


void binary :: ones(){
    check();
    int i=s.length();
    while(i--){
        if(s[i]=='1') cnt++;
    }
    cout<<cnt<<"\n";
}

int main(){
    binary b;
    b.read();
    b.ones();

}