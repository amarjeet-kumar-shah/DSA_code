//028_02 :- use of reference Variable
#include<iostream>
using namespace std;
void update1(int n){
    n++;
}
void update2(int &n){
    n++;
}
int main(){
    
    int n=6;
    update1(n);
    cout<<n<<endl;  //6
    update2(n);
    cout<<n<<endl;  //7 
}