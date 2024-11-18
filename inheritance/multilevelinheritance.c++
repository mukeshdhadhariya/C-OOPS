#include<iostream>
using namespace std;

class student{
    protected:
    int rollno;
    public:
    void setrollno(int a){
        rollno=a;
    }
    void getrollno(){
        cout<<"roll no of student is : "<<rollno<<"\n";
    }
};

class exam : public student{
protected:
int math;
int physics;
public:
void setmarks(int a,int b){
math=a;
physics=b;
}
void getmark(){
    cout<<"math  marks : "<<math<<"\n";
    cout<<"physics mark : "<<physics<<"\n";
}

};

class result : public exam{
float percentage;
public:
void getpercentage(){
    // setrollno(430);
    // setmarks(94,90);
    getrollno();
    getmark();
    cout<<"percentage is : "<<(math+physics)/2<<" %\n";
}

};

int main(){

    result a;
    a.setrollno(430);
    a.setmarks(94,90);
    a.getpercentage();

}