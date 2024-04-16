//Priority_queue 
#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creating maxi heap
    priority_queue<int> maxi;
    //creating mini heap
    priority_queue<int,vector<int> , greater<int> >mini;
    //adding one element in end 
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);


    //printing elements in maxi queue 
    int n = maxi.size();
    for(int i = 0; i<n;i++){
        //removeing one element
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    //checking queue in empty or not?
    cout<<"empty or not" <<mini.empty();

}