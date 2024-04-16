//023_01 :- Input or output in 2-D Arrays
#include<iostream>
using namespace std;


int main(){
   int arr[3][4];
   //input :-
   //    M-1 :-int arr[3][4]={1,2,3,4,5,6,7,8,9};
   //    M-2 :-int arr[3][4]={{1,2,3},{4,5,6},{1,2,3}}
   //    M-3 :-taking input
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
}