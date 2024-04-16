// Reverse of String
#include<iostream>
using namespace std;
void swap (char name [] ,int size){
   int s = 0;
   int e = size - 1;
   while (s <= e ){
      swap (name[s],name[e]);
      s++;
      e--;
   }
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
   swap(name,Length);
   cout<<"name is " <<name<<endl;
   return 0;
}