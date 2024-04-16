// Calculating nCr

#include<iostream>
using namespace std ;

int fact(int n){
    int i ;
    int fact =1 ;
    for(i=1 ; i<=n ; i++){
    fact =fact * i ;
    }
    return fact ;
}

int main(){
    int n,r;
    cout <<"Enter n = "<<" ";
    cin>>n;
    cout <<"Enter r = "<<" ";
    cin>>r;
    int numineter = fact(n);
    int dinomineter =fact(r)*fact(n-r);
    
    int ans =  numineter/dinomineter;
    cout<< ans ;
}