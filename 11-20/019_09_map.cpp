//map:- isme data  ak key ke rup me store hota hai 
//      ak key ak hi data ko present karta hai 
#include<iostream>
#include<map>
using namespace std;
int main(){
    //creating map
    map<int,string> m;
    //adding element  
    //M-1;
    m[1] = "Amarjeet";
    m[12] = "kumar";
    m[3] = "shah";
    //M-2;
    m.insert({5,"bheem"});
    //printing elements
    for(auto i :m){
        cout<<i.first<<" ";
    }
    cout<<endl;
    // checking something is presting or not
    cout<<" is present = "<<m.count(5)<<endl;
    //removing one element
    m.erase(5);
    for(auto i :m){
        cout<<i.first<<" ";
    }
    cout<<endl;
}