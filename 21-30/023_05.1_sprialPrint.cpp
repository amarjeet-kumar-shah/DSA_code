//Printing sprial
//     if 1 2 3 
//        2 3 4 
//        6 7 8 

//     then 1 2 6 7 8 4 3 2 3 
#include<iostream>
using namespace std;

void spiralPrint(int arr[][3],int i,int j){
   for(int j = 0;j<3;j++){
      if(j %2 ==0){
         for(int i= 0;i<3;i++){
           cout<< arr[i][j]<<" ";
         }
         cout<<endl;
      }
      else{
         for(int i= 3;i>=0;i--){
           cout<< arr[i][j]<<" ";
         }
         cout<<endl;

      }
      

   } 
}

int main(){
   int arr[3][3];
    //taking input  M-3:-
   for(int i = 0;i<3;i++){
      for(int j= 0;j<4;j++){
         cin>>arr[i][j];
      }
   }
   // printing outut
   for(int i = 0;i<3;i++){
      for(int j= 0;j<3;j++){
         cout<<arr[i][j]<<" ";
      }
      cout<<endl;
   }
      cout<<endl;

   spiralPrint(arr,3,3);
 
}