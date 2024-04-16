//Binary search in 2D Array
#include<iostream>
using namespace std;

int binarySearch(int arr[][4],int i,int j,int key){
   int start = 0;
   int end= i * j - 1;

   int mid = start + (end-start/2);
   cout<<mid;
    int element = arr[mid/j][mid/i];
      cout<<element;
   // while(start<=end){
   //    int element = arr[mid/j][mid/i];
   //    cout<<element;
   //    if(element == key){
   //       return 1;
   //    }
   //    else if(element <=key){
   //       end = mid -1;
   //    }
   //    else{
   //       start = mid +1;
   //    }

   //    mid = start + end /2;
   // }
   // return -1;
   return 0;
}

int main(){
   int arr[3][4];
   int key;
   cout<<"enter Key = "<<" ";
   cin>>key;
    //taking input  M-3:-
   for(int i = 0;i<3;i++){
      for(int j= 0;j<4;j++){
         cin>>arr[i][j];
      }
   }
   // printing outut
   for(int i = 0;i<3;i++){
      for(int j= 0;j<4;j++){
         cout<<arr[i][j]<<" ";
      }
      cout<<endl;
   }
      cout<<endl;
   binarySearch(arr,3,4,key);
   // cout<<"key isPresent = "<<binarySearch(arr,3,4,key);
 
}