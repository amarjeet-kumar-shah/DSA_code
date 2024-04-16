//deque :- isme dono or se insertion or deletion
//          ho sakta hai
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    //adding one element in end and front
    d.push_back(2);
    d.push_front(3);
    //printing elements of deque 
    //M-1:-
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    //M-2:-
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    //removeing one element in end and front
    d.pop_front();
    cout<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.push_front(8);
    d.push_front(9);
    //printing only one element
    //M-1
    cout<<d[2]<<endl;
    //M-2
    cout<<"Element ai 2nd Index = "<<d.at(2)<<endl;
    //printing front and last element in array
    cout<<"First Element = "<<d.front()<<endl;
    cout<<"Last Element = "<<d.back()<<endl;
    //empty or not
    cout<<"Empty or not"<<d.empty()<<endl;
    //remove data in deque
    cout<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    //isme last index wala add nahi hota hai
    d.erase(d.begin(),d.begin()+1);
    for(int i : d){
        cout<<i<<" ";
    }
 }