#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream fout;
    // fout.open("zoom.txt");
    // fout<<"hello bhai";
    // fout.close();

    // ifstream fin;
    // fin.open("zoom.txt");
    // char c;
    // c=fin.get();
    // int i=0;
    // while (!fin.eof())
    // {
    //    cout<<c;
    //    c=fin.get();
    // }
    // fin.close();

    int arr[5]={1,2,3,4,5};
    ofstream fout;
    fout.open("zoom.txt");
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }
    fout.close();
}