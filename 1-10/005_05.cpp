#include<iostream>
using namespace std;

int main(){
    int n,i;
    int sum =0;

    cout <<"Enter Number :"<<" ";
    cin>>n;

    cout <<"printing sum from 1 to "<<n<<" " <<":-"<< endl;
    
    for ( i = 1; i<=n ;i++){
        sum = sum + i;
    }
    cout <<"sum from 1 to "<< n<< " " << "is : "<< sum<<endl;

}