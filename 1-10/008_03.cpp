#include <iostream>
using namespace std;

int main (){
    int a ;
    int b;
    char op ;
    cout <<"Enter the value of a"<<" ";
    cin>>a;
    cout <<"Enter the value of b"<<" ";
    cin>>b;
    cout <<"Enter the oeration"<<" ";
    cin>>op;
    
    
    switch(op){
        case '+': cout<<(a + b)<<endl;
        break;

        case '-': cout<<(a - b)<<endl;
        break;

        case '*': cout<<(a * b)<<endl;
        break;

        case '/': cout<<(a / b)<<endl;
        break;

        default: cout<< "It is a default case"<<endl;
    }
}