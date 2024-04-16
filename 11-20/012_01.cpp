// finding key in binarary search.

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int start = 0;
    int end = size -1;
    int mid = (end +start)/2;
    while(end>=start){
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        mid = (end +start)/2;
    }return -1;
}

int main(){
    int even[6] = {2,3,4,5,6,7};
    int odd[5] = {3,4,5,6,7};

    int evenIndex = binarySearch(even,6,10);
    cout<<"Index of 6 is"<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,5);
    cout<<"Index of 5 is"<<oddIndex<<endl;
}