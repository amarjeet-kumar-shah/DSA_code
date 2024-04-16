#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){
    int i;
    for(int i = 1;i<size;i++){
       int temp = arr[i];
       int j= i-1;
       for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
             }
             else{
                 break;
             }
       }
       arr[j+1] = temp;
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int Array[6] = {10,1,7,6,14,9};
    insertionSort(Array,6);
}