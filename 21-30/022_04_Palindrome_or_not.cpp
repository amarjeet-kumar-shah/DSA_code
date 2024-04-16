// Palindrome :- if reverse of string is same as prious 
//               string .that cauld palindrome.

//check palindrome or not 
#include<iostream>
using namespace std;
bool compare (char name [] ,int size){
   int s = 0;
   int e = size - 1;
   while (s<= e){
      if(name[s]!=name[e]){
          return 0;
      }
      else{
      s++;
      e--;
      }
   }return 1;
}
int getLength(char name[]){
   int count = 0;
   for(int i = 0;name[i] != '\0';i++){
      count++;
   }
   return count;
}
int main(){
   char name[20];
   cout<<"Enter your name " <<endl;
   cin>>name;
   cout<<"your name is "<<name<<endl;
   int Length = getLength(name);
   cout<<"length of String is " <<Length<<endl;
  
   cout<< "is Palindrome "<<compare(name,Length);
   return 0;
}