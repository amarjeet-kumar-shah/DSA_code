//028_01 :- referenceVariable
#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int &j = i;
    cout<<i<<endl;  //5
    cout<<j<<endl;  //5
    i++;
    cout<<j<<endl;  //6
    j++;
    cout<<i<<endl;  //7

    
}