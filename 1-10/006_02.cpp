// binary to desimal.

#include<iostream>
#include<math.h>
using namespace std;

 int main(){

    int n ;
    cin>>n;
    int i = 0;
    int ans = 0;
    int rem ;
    while(n != 0){
        rem = n%10;
        
        ans = (pow(2,i) * rem)+ ans;
        i++;
        n= n/10;
    }
    cout<<ans;
}