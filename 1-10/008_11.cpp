#include<iostream>
using namespace std ;

int AP (int n){
    int a= 3*n +7;
    
    return a;
}

    

int main(){
    int n;
    cout<<"Enter n ="<<" ";
    cin>>n;
    cout<<AP(n);
}