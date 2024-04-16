// fibonachi using function

#include<iostream>
using namespace std ;


int fibonachi(int n){
    int fn =0;
    int fs =1;
    for (int i =1 ;i<=n;i++){
        fs = fs + fn ;
        fn = fs ;
    }
    return fn +fs;
}
    

int main(){
    int n;
    cout<<"Enter n ="<<" ";
    cin>>n;
    cout<<fibonachi(n);
}