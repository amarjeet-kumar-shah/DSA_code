//20_03_stack and heap memory use
#include<iostream>
using namespace std;

void sum(int arr[],int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum= sum + arr[i];
    }
    cout<<sum;
}

int main(){
    int n;
    cout<<"enter n = "<<" ";
    cin>>n;
    int * arr = new int[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sum(arr , n);
}