#include<iostream>
using namespace std;
int main(){
    int arr[]={50,40,10,30,20};
    int n =sizeof(arr)/sizeof(int);
    for(int i=1;i<=n-1;i++){
        //in the ith pass of the insertion sort , you have to insert the first element of the unsorted part to its correct position in the sorted part of the array.
        int key = arr[i];
        int j=i-1;
        while(j>=0 and key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;

    }
    return 0;
}