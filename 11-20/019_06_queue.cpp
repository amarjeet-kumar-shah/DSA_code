//queue:- first in first out 
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    //adding one element in end 
    q.push("Amarjeet");
    q.push("Kumar");
    q.push("Shah");

    //printing elements in queue 
    cout<<"top element = "<<q.front()<<endl;
    
    //removeing one element in end 
    q.pop();
    cout<<"top element = "<<q.front()<<endl;
    q.pop();
    cout<<"top element = "<<q.front()<<endl;

    //printing size of queue
    cout<<"size of stack = "<<q.size()<<endl;

}