//024_01 :- countPrime 
#include<iostream>
using namespace std;

int countPrime(int n){
   int count = 0;

   if(n<=1){
      return false;
   }
   for(int i = 2;i<n;i++){
      if(n%i==0){
         count++;
      }
   }
   return count ;
} 
int main(){
  int n;
  cout<<"Enter n = ";
  cin>>n;
  cout<<countPrime(n);
}