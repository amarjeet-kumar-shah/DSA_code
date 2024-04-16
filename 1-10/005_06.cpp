#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    a =0;
    b = 1;
    int Next_Number =0;

    cout <<"Enter Number :"<<" ";
    cin>>n;

    cout <<"printing fibonacci serise from 1 to "<<n<<" " <<":-"<< endl;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i<=n ;i++){
        Next_Number = a + b ;
        cout<<Next_Number<<" ";
        a = b;
        b = Next_Number;
        
    }
    
}