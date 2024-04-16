#include <iostream>
using namespace std;

// 1 -> even 
// 0 -> odd
bool iseven(int a ){
    if (a&1){
        return 0;               // odd
    }
    else{
        return 1;               // even
    }
    // return a and 1 ? 0 : 1;
}
int main (){
   int num ;
   cout << "enter Number = "<<"";
   cin >> num;
    // cout<<iseven(num);
   if (iseven(num)){
    cout<<"Number is even "<<endl;
   }
   else {
    cout <<"Number is odd"<<endl;
   }

}