#include<iostream>
using namespace std;

int main(){
    int n;

    cout <<"Enter Number :"<<" ";
    cin>>n;

    cout <<"printing count from 1 to n "<< endl;
    
    for (int a = 1, b=2 , c=3; a<=n ,b<=n, c<=n ;a++,b++,c++){
        cout <<a<<" "<<b<<" "<<c<<endl;
    }

}