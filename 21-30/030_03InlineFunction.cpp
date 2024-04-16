//030_03:- Inline Function 
#include<iostream>
using namespace std;

inline int getMax(int& a,int& b){
   return (a>b) ? a : b;
}
int main(){
  int a = 5,b = 4;
  cout<<  getMax(a,b);
  a= a+2;
  b = b +4;
  cout<<getMax(a,b);
}