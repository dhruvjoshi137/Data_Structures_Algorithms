#include<iostream>
using namespace std;
int main(){
    int arr[]={50,40,10,30,20};
    int n=sizeof(arr)/sizeof(int);
    
    for(int i=0;i<n-1;i++){
        //in the ith pass , place the smallest element in the unsorted array to its correct position
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[minIdx],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}