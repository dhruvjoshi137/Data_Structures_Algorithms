#include<iostream>
using namespace std;
int main(){
    int arr[]={12,45,23,51,19,8};
    int n = sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}