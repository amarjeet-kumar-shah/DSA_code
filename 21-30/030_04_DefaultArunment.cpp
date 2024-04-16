//030_04:- Default Arunment  
#include<iostream>
using namespace std;

void printArrayElement(int arr[],int n,int start = 0){
  for(int i=start;i<=n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[] ={1,2,4,5,7};
  int start = 3;
  int size = 4;
  printArrayElement(arr,size);
  cout<<endl;
  printArrayElement(arr,size,start);


}