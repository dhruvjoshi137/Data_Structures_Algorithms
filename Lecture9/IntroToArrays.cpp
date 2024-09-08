#include<iostream>
using namespace std;
int main(){
    //char arr[5];//size is 5B
    //float arr[5];//size is 20B
    //double arr[5];//size is 40B
    // int arr[5]={10,20,30,40,50};//size is 20B
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;

    // }
    // cout<<sizeof(arr)<<"B";
    int B[]={10,20,80,90,100}; //integer takes 4 bytes to get stored and i have the size of B as 20bytes so if i need to calculate how many elements the array stores , i can simply divide the sizeof(B)/sizeof(int)

    int m=sizeof(B)/sizeof(int);
    for(int i=0;i<m;i++){
        cout<<B[i]<<endl;
    }
    cout<<endl;
    return 0;
}