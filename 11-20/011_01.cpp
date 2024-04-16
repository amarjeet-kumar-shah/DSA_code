// reverse of array 
// swap agal bagle wale

#include <iostream>
using namespace std;

void reverse(int arr[],int n ){
    
    
        for (int i = 0;i<n;i=i+2){
            swap(arr[i],arr[i+1]);
            
        }
        
        
    }


void printArray (int arr[],int n){
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main(){
    int arr[6] = { 1,2,4,6,-84,-56};
    

    reverse(arr,6);
   

    printArray(arr,6);
   

}