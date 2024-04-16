//Algorithum :- to reduce the code 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(8);
    v.push_back(4);
    v.push_back(7);
    // checking something is presting or not
    cout<<"Is present = "<<binary_search(v.begin(),v.end(),6)<<endl;
    int a = 3;
    int b = 6;
    //printing max
    cout<<max(a,b)<<endl;
    //printing min
    cout<<min(a,b)<<endl;
    //swaping two number
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    //printing reverse 
    string s = "abcde";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}