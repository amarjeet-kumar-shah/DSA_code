//Vector :- isme ye hota hai ki jab humne 4 size ka vector
//          bana diya ,fir 4 elements fill bhi kar diye 
//          to 5th element add karte hi vector ka size double 
//          ho jayega or purane wale vector ka data isme aa 
//          jayega or purana wala vector delete ho jayega.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    //printing capacity of vector
    cout<<"capacity of vector = "<<v.capacity()<<endl;
    //adding one element in end
    v.push_back(1);
    cout<<"capacity of vector = "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity of vector = "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"capacity of vector = "<<v.capacity()<<endl;
    //printing size of vector
    cout<<"size of vector = "<<v.size()<<endl;
    //printing only one element
    //M-1
    cout<<v[2]<<endl;
    //M-2
    cout<<"Element ai 2nd Index = "<<v.at(2)<<endl;
    //printing front and last element in array
    cout<<"First Element = "<<v.front()<<endl;
    cout<<"Last Element = "<<v.back()<<endl;
    //printing all element in vector
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //removeing one element in end
    v.pop_back();
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //clearing of a vector
    // clearing :- vector ko clear karne se vector ka size 
    //            zero hota hai na ki capacity
    cout<<"size of vector = "<<v.size()<<endl;
    v.clear();
    cout<<"size of vector = "<<v.size()<<endl;
    cout<<"capacity of vector = "<<v.capacity()<<endl;
    //iniselizing vector with size
    //printing 1 five times
    vector<int> a(5,1);
    for(int i = 0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}