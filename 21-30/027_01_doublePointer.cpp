// 027_01 :- doublePointer

#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;
    int **p2= &p;

    cout<<i<<endl;      //5
    cout<<*p<<endl;     //5
    cout<<**p2<<endl;   //5

    cout<<p<<endl;      //0x61fe14
    cout<<&i<<endl;     //0x61fe14
    cout<<*p2<<endl;    //0x61fe14
}