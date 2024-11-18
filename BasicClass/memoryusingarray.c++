#include<iostream>
using namespace std;

class shop{
    string itemid[100];
    int price[100];
    int cnt;
    public:
    void intitcnt(){
        cnt=0;
    }
    void setprice();
    void displayprice();

};

void shop ::setprice(){
    cout<<"enter name : ";
    cin>>itemid[cnt];
    cout<<"setprice : ";
    cin>>price[cnt];
    cnt++;
}

void shop ::displayprice(){
    for(int i=0;i<cnt;i++){
        cout<<"Name with Price -> "<<itemid[i]<<" : "<<price[i]<<"\n";
    }
    cout<<"\n Contact  Mukesh dhadhariya to Order now at Romm \n Pay after diliver\n contct : 9783609918";
}
int main(){
    shop d1;
    d1.intitcnt();
    d1.setprice();
    d1.setprice();
    d1.setprice();
    d1.displayprice();

}
