#include<iostream>
using namespace std;

//time = O(n)
//space = O(n)

int f(int arr[],int n){
    
    int x;
    x=arr[0];
    int maxsofar=x;

    for(int i=1;i<n;i++){
        x[i]=max((x[i-1]+arr[i]),arr[i]);
        maxsofar=max(maxsofar,x[i]);
    }
    return maxsofar;
}


int main(){
    int arr[]={-3,2,-1,4,-5};
    int n = sizeof(arr)/sizeof(int);
    cout<<f(arr,n)<<endl;
    return 0;
}