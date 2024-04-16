// // reverse of array

 #include <iostream>
 using namespace std;

// void reverse(int arr[],int n ){
//     int start =0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray (int arr[],int n){
//     for (int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
// }

// int main(){
//     int arr[6] = { 1,2,4,6,-84,-56};
//     int brr[5]= {2,5,-4,-6,46};

//     reverse(arr,6);
//     reverse(brr,5);

//     printArray(arr,6);
//     printArray(brr,5);

// }

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

void printarray(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]= {1,3,4,5,6};
    int brr[6]= {1,4,5,6,3,7};

    reverse(arr,5);
    reverse(brr,6);

    printarray(arr,5);
    printarray(brr,6);
}