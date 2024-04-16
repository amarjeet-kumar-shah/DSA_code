// 026_01 :- Pointer in arrays

#include<iostream>
using namespace std;

int main (){
    int arr[10] = {2,4,8,6,3};
    char cha[6]  = "adsds";

    cout<<arr<<endl;        //0x875ghf0
    cout<<cha<<endl;         //adsds
    char temp = 'r';
    char *p = &temp;
    cout<<p<<endl;      //run to ho jatega 
                        //per kya pata nahi
}
