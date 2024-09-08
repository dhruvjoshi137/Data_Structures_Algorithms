#include<iostream>
using namespace std;

int maxsubarraysum(int arr[],int n){
    
    int x;
    x=arr[0];
    int maxsofar=x;

    for(int i=1;i<n;i++){
        x=max((x+arr[i]),arr[i]);
        maxsofar=max(maxsofar,x);
    }
    return maxsofar;
}

int minsubarraysum(int arr[],int n){
    
    int x;
    x=arr[0];
    int minsofar=x;

    for(int i=1;i<n;i++){
        x=min((x+arr[i]),arr[i]);
        minsofar=min(minsofar,x);
    }
    return minsofar;
}

int computesum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
    sum=arr[i]+sum;
    }
    return sum;
}

int maxSubarraySumCircular( int arr[],int n) {
    int sum = computesum(arr,n);
    int maxsum= maxsubarraysum(arr,n);
    int minsum= minsubarraysum(arr,n);

    // return sum == minsum ? maxsum : max(sum-minsum , maxsum);
        if(sum == minsum){
            return maxsum;
        }else{
            return (sum-minsum,maxsum);
        }
    }


int main(){
    int arr[]={-1,-3,-4};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxSubarraySumCircular(arr,n)<<endl;
}

//C:\Users\dhruv\OneDrive\Documents\GitHub\Data_Structures_And_Algorithms