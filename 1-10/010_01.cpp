// find unique number 


#include<iostream>
using namespace std;

int findUnique(int arr[] ,int size){
    int ans =0 ;

    for(int i =0 ; i <size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main (){
    int n;
    int arr[n] ;
    cout<<"Enter n = "<<" ";
    cin>>n;
    findUnique(arr,n);

}