#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);  // 20/4 = 5 
    for(int i = 0; i<n;i++){
        sum = sum+arr[i];
        cout<<sum<<endl;
    }

    cout<<"Final"<<sum<<endl; 
    return 0;
}