#include<iostream>
using namespace std;

class student{
    protected:
    int rollno;
    public:
    void setdata(int a){
        rollno=a;
    }
    void printdata(){
        cout<<"roll no of student : "<<rollno<<"\n";
    }
};

class test:virtual public student{
protected:
int math,physics;
public:
void setmark(int a,int b){
    math=a;
    physics=b;
}
void print(){
    cout<<"marks of math : "<<math<<"\n";
    cout<<"marks of physics : "<<physics<<"\n";
}
};

class sports: virtual public student{
    protected:
    int score;
    public:
    void setscore(int x){
        score=x;
    }
    void printscore(){
        cout<<"score in pt : "<<score<<"\n";
    }
};

class result : public test,public sports{
    private:
    float total;
    public:
    void display(){
        total=math+physics+score;
        printdata();
        print();
        printscore();
        cout<<"total marks : "<<total<<"\n";

    }
};

int main(){

    result t;
    t.setdata(430);
    t.setmark(93,91);
    t.setscore(90);
    t.display();

}