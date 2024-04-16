// 026_01 :- Pointer in arrays

#include<iostream>
using namespace std;

int main (){
    int arr[10] = {2,4,8,6,3};
    //printing address of first memory block in arr
    //m-1:-
    cout<<"address of first memory block is "<<arr<<endl;
    //m-2:-
    cout<<"address of first memory block is "<<&arr[0]<<endl;
    
    //printing arrays elements
    //m-1:-
    cout<<"value of first memory block is "<<arr[0]<<endl;
    //m-2:-
    cout<<"value of first memory block is "<<*arr<<endl;
    //value of second memout block
    cout<<"value of second memory block is "<<*(arr+1)<<endl;

    //Update value of 1st location
    cout<<"updation of first memory block is "<<*(arr)+1<<endl;

    //printing arr element
    int i = 3;
    //m-1
    cout<<i[arr] <<endl;            //6
    //m-2
    cout <<arr[i]<<endl;            //6

    int arr2[10];
    cout<<sizeof(arr2[0])<<endl;     //4
    int *ptr2 = &arr2[0];       
    cout<<sizeof(ptr2)<<endl;       //8
    cout<<sizeof(arr2)<<endl;       //40
}
