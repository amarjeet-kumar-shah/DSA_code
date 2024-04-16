//stack:- last in first out 
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    //adding one element in end 
    s.push("Amarjeet");
    s.push("Kumar");
    s.push("Shah");

    //printing elements in stack 
    cout<<"top element = "<<s.top()<<endl;
    
    //removeing one element in end 
    s.pop();
    cout<<"top element = "<<s.top()<<endl;
    s.pop();
    cout<<"top element = "<<s.top()<<endl;

    //printing size of stack 
    cout<<"size of stack = "<<s.size()<<endl;

}