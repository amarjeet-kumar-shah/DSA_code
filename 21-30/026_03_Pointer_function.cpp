// 026_01 :- Pointer in arrays

#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;     //5
    cout<<p<<endl;      //0x61gt14
}
void update(int *p){
    p = p+1;
    cout<<p<<endl;      //0x61gt18
   
}
void updatevalue(int *p){
     *p = *p +1;
    cout<<*p<<endl;     //6
}
int main (){
    int value = 5;
    int *p =&value;

    print(p);
    update(p);
    updatevalue(p);

}
