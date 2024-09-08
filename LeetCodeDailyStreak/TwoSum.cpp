//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

//You can return the answer in any order.


#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int n=sizeof(arr)/sizeof(int);
    int target=26;
    int i=0;
    int j=n-1;
    while(i<j){
        int sum = arr[i]+arr[i+1];
        if(sum==target){
            cout<<"target found "<<arr[i , i+1]<<endl;
            break;
        }
        i++;
    }
    return 0;


}