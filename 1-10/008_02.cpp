#include <iostream>
using namespace std;

int main (){
    char ch = '1';
    char num = 6;
    cout<<endl;
    switch(ch){
        case 1: cout<<"normal one"<<endl;
        break;

        case '1': cout<<"character one"<<endl;
                   switch(num){
                        case 6 : cout <<"Value of num is "<< num<<endl;
                                break;
                                }
        break;

        default: cout<< "It is a default case"<<endl;
    }
}