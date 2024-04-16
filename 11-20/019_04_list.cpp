//list:- 
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    //adding one element in end and front
    l.push_back(2);
    l.push_front(3);
    //printing elements of deque 
    //M-1:-
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    //removeing one element 
    l.erase(l.begin());
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    //printing size of list 
    cout<<"size of list = "<<l.size()<<endl;
}