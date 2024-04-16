//29_01 :- DMA in 2D Arrays
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    //creation 2D array
    int**arr = new int *[m];
    for(int i=0;i<m;i++){
        arr[i] = new int[n];
    }
    //taking input
    for(int i = 0;i<m;i++){
        for(int j= 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //giving output
    for(int i = 0;i<m;i++){
        for(int j= 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //releasing memory
    for(int i=0;i<m;i++){
        delete [] arr[i];
    }
    delete []arr;
}