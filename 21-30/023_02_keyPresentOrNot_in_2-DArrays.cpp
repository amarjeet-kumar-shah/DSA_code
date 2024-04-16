//023_02 :- Key present or not in 2-D Array
#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int key,int i,int j){
   for(int i = 0;i<3;i++){
      for(int j= 0;j<4;j++){
         if(arr[i][j]==key){
            return 1;
         }
         
      }
   } return 0;
}

int main(){
   //input :-
   int arr[3][4]={1,2,3,4,5,6,7,8,9};
   int key;

   cout<<"Enter the key "<<" ";
   cin>>key;

   if(isPresent(arr,key,3,4)){
      cout<<"Key present";
   }
   else{
      cout<<"Key not Present";
   }
}