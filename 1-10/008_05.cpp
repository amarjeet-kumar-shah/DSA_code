#include <iostream>
using namespace std;

int main (){
    int a ;
    int b;
    int i;
    int ans = 1 ;
    cout <<"Enter the value of a ="<<" ";
    cin>>a;
    cout <<"Enter the value of b ="<<" ";
    cin>>b;

    for (i=1;i<=b;i++){
        ans =ans * a ;
    }

    cout <<"answer is = "<<ans<<endl;
}