// // lineare search

// #include <iostream>
// using namespace std;

// bool search(int arr[],int size ,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//         
//     }return 0;
// }

// int main (){
//     int arr [10] = {5,7,-2,10,22,-24,4,6,-987,-97};
//     int key;
//     cout<<"Enter the element to search for "<<" ";
//     cin>>key;

//     bool found = search(arr,10,key);

//     if (found){
//         cout<<"Key is present"<<endl;
        
//     }
//     else{
//         cout<<"Key is not presrnt"<<endl;
//     }
    
// }   

#include <iostream>
using namespace std;

bool search(int arr[],int size, int key){
    for(int i = 0;i<=size;i++){
        if(key == arr[i]){
            return 1;
        }

    }
    return 0;


}

int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9,19};
    int key;
    cout<<"enter key "<<endl;
    cin >>key;
    bool found = search(arr,10,key );
    if(found){
        cout<<"key hai";
    
    }
    else{
        cout<<"key nahi hai";
    }

}