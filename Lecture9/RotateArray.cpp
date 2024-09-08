#include<iostream>
using namespace std;
int main(){
    int arr[]={10,60,70};
    int n = sizeof(arr)/sizeof(int);
    int temp = arr[n-1]; //n=7 -- 1st step done
    for(int i=n-1; i>=1; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp; //temp=arr[n-1]=70

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}