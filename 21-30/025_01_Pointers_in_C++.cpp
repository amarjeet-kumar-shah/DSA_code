// 025_01 :- Pointer is used to stored address of Operator

#include<iostream>
using namespace std;

int main (){
    int num = 5;
    cout<<num <<endl;
    //creating Pointer
    int*ptr = &num;
    //printing address of num 
    //m-1:-
    cout<<"address of num is "<<&num <<endl;
    //m-2:-
    cout<<"address of num is "<<ptr<<endl;

    //printing value of num
    //m-1:-
    cout<<"value of num is "<<num <<endl;
    //m-2:-
    cout<<"value of num is "<<*ptr<<endl;

    //size of int operator and int pointer
    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;

    //Updation of Pointers
    int a = 9;
    int *p = &a;
    (*p)++;
    cout<<a<<endl;

    // Copy of pointers and their value
    int *q = p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;

    int i = 5;
    int *r = &i;
    cout<<r<<endl;
    cout<<*r<<endl;
    //Updation of operator memory address
    r=r+1;
    cout<<r<<endl;
    cout<<*r<<endl;
    //Updation of value of operator
    *r = *r + 1 ;
    cout<<*r<<endl;
}