#include<iostream>
using namespace std;

class bankdeposite{
int p,y;
float r;
float a;

public:
    bankdeposite(){};
    bankdeposite(int p1,int y1,int r1);
    bankdeposite(int p1,int y1,float r1);
    void show();

};

bankdeposite::bankdeposite(int p1,int y1,int  r1){
    p=p1;
    y=y1;
    r=float(r1)/100;
    a=p;
    for(int i=0;i<y;i++){
        a = a * (1 + r);
    }
}

bankdeposite::bankdeposite(int p1,int y1,float r1){
    p=p1;
    y=y1;
    r=r1;
    a=p;
    for(int i=0;i<y;i++){
        a = a * (1 + r);
    }
}

void bankdeposite::show(){
cout<<"principle value "<<p<<"\n return value after "<<y<<" is  "<<a<<"\n";
}

int main(){
    cout<<"enter y p r :\n";
    int y2,p2;
    float r2;
    cin>>p2>>y2>>r2;

    bankdeposite mu=bankdeposite(p2,y2,r2);
    mu.show();

    cout<<"enter y p r :\n";
    cin>>p2>>y2>>r2;
    bankdeposite pr=bankdeposite(p2,y2,r2);
    pr.show();


}