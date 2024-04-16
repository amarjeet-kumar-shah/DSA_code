#include<iostream>
using namespace std ;

int main(){
    int a ;
    int i ;
    int n ;
    int r ;


    int factn = 1 ;
    int factr = 1 ;
    int factn_r = 1 ;
    
    cout <<"Enter n = "<<" ";
    cin>>n;
    cout <<"Enter r = "<<" ";
    cin>>r;


    for (i=1 ;i<=r;i++){
        factr = factr * i ;
    }

    for (i=1 ;i<=n;i++){
        factn = factn * i ;
    }

    for (i=1 ;i<=n - r;i++){
        factn_r = factn_r * i ;
    }

    a = factn/factr * factn_r;

    cout <<"nCr is "<<a;
    

}