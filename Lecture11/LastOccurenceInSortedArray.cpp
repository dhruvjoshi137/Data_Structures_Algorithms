#include<iostream>
using namespace std;
int UpperBound(int arr[],int n ,int t){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==t){
            ans=m;
            s=m+1;
        }else{
            if(arr[m]>t){
                e=m-1;
            }else{
                s=m+1;
            }
        }
    }
    return ans;
}

int main(){
    int arr[]={10,20,30,40,50,50,50,60,70,70,70,30,30,30};
    int n=sizeof(arr)/sizeof(int);
    int t=50;
    cout<<UpperBound(arr,n,t)<<endl;
    return 0;
}