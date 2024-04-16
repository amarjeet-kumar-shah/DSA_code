#include <iostream>
using namespace std;

int main (){
    int Amount ;
    cout<< "Enter Amount"<<" ";
    cin >> Amount;

    int a = Amount / 100 ;
    int b = Amount % 100 ;
    int c = b / 20 ;
    int d = b % 20 ;
    int e = d / 1 ;
    int f = d % 1 ;

    cout<<"required 100 rupees notes = "<<a<<endl;
    cout<<"required 20 rupees notes = "<<c<<endl;
    cout<<"required 1 rupees notes = "<<e<<endl;


}