#include<iostream>
using namespace std ;

void num (int n){
    for(int i =1 ;i<=n;i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter n ="<<" ";
    cin>>n;
    num(n);
}