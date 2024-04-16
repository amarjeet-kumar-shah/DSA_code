// desimal to binary.

#include<iostream>
#include<math.h>
using namespace std;

 int main(){
//     int n;
//     cin>>n;
//     int ans =0;
//     int i = 0;
//     while(n!=0){
//         int bit = n&1;
//         ans = (bit * pow(10,i)) + ans;
//         n = n>>1;
//         i++;
//     }

//    cout<<ans;
    int n ;
    cin>>n;
    int i = 0;
    int ans = 0;
    while(n != 0){
        int rem = n%2;
        n=n/2;
        ans = (ans * 10 )+ rem;
        i++;

    }
    cout<<ans;
}