#include<iostream>
using namespace std;
int main(){
    int arr[]={20,30,40,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(int);
    int i;
    int j;
    cout<<"enter the place from which you want the array to be reversed"<<endl;
    cin>>i;
    cout<<"enter the place to which you want the array to be reversed"<<endl;
    cin>>j;
    while(i<j){
        swap(arr[i],arr[j]);
            i++;
            j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}