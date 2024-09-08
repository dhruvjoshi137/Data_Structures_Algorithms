#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,3,1};
    int n=sizeof(arr)/sizeof(int);
    int thirdmaxsofar=INT32_MAX;
    //Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
    for(int i=0;i<n;i++){

        if (arr[i]<thirdmaxsofar){
            thirdmaxsofar=arr[i];
            if(arr[i]<arr[i+1]){
                i++;
            }
        }
        i++;
        
    }
    cout<<thirdmaxsofar<<endl;
}