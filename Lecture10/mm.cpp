#include<iostream>
using namespace std;
int main(){
    int arr[]={12,23,45,51,19,8};
    int n=sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    
    return 0;
}