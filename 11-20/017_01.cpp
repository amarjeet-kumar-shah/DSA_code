#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    int i;
    for(int i = 1;i<size;i++){
        //for round 1 to size-1
         bool swapped = false;
        for(int j=0;j<size-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }

        }
         if(swapped==false){
             break;
         }
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int Array[6] = {10,1,7,6,14,9};
    bubbleSort(Array,6);
}