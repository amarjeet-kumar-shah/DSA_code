//set :- isme sare element unque (1-1) hi hote hai 
//       ager hum 3 bar 7 ko store karva de tab bhi 
//       7 ak bar hi store hata hai 
#include<iostream>
#include<set>
using namespace std;
int main(){
    //creating set
    set<int> s;
    //adding element  
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    //printing elements
    for(auto i :s){
        cout<<i<<" ";
    }
    cout<<endl;
    //removing one element
    s.erase(s.begin());
    for(auto i :s){
        cout<<i<<" ";
    }
    cout<<endl;
    // checking something is presting or not
    cout<<" is present = "<<s.count(5)<<endl;
}