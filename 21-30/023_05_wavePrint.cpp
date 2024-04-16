//023_05 :- Printing wave
//     if 1 2 3 4 
//        2 3 4 5 
//        6 7 8 9

//     then 1 2 6 7 3 2 3 4 8 9 5 4 
#include<iostream>
using namespace std;

void wavePrint(int arr[][4],int i,int j){
   for(int j = 0;j<4;j++){
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
   int arr[3][4];
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
      cout<<endl<<endl<<endl;

   wavePrint(arr,3,4);
 
}