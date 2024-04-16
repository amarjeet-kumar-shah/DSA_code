//Array
#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3] = {1,2,3};
    // array<datatype,size> a = {1,2,3,4};
    array<int,4> a = {4,7,9,6};
    // printing size of array
    int size = a.size();
    cout<<"size of a is = "<<size<<endl;
    // printing elepments of array
    for(int i = 0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //printing only one element
    //M-1
    cout<<a[2]<<endl;
    //M-2
    cout<<"Element ai 2nd Index = "<<a.at(2)<<endl;

    //checking array is empty or not
    cout<<"Empty or Not "<<a.empty()<<endl;
    //printing front and last element in array
    cout<<"First Element = "<<a.front()<<endl;
    cout<<"Last Element = "<<a.back()<<endl;
}

