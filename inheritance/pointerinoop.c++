#include<iostream>
using namespace std;
int main(){
    // int* ptr =new int(40);
    // cout<<ptr<<"\n";
    // cout<<*ptr<<"\n";

    int* arr=new int[3];
    *arr=1;
    arr[1]=2;
    arr[2]=3;
    // delete[] arr;
    for (int i=0;i<3;i++){
        cout<<arr[i]<<"\n";
    }


}