//023_03 :- Printing row sum
#include<iostream>
using namespace std;

void rowSum(int arr[][4],int i,int j){
   for(int i = 0;i<3;i++){
      int sum = 0;
      for(int j= 0;j<4;j++){
         sum+= arr[i][j];
      }
      cout<<"Sum of "<<i<<"th row is = "<<sum<<endl;
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

   rowSum(arr,3,4);
 
}