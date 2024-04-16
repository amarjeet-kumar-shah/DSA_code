//030_02:- Global Variable
#include<iostream>
using namespace std;
int a = 5;  //Global Variable
void c(){
   cout<<a<<endl;
}
void b(){
   cout<<a<<endl;
}
int main(){
   cout<<a<<endl;
   c();
   b();
}