#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int t){
    int s=0;   //starting point
    int e=n-1;  //ending point

    while(s<=e){
    int m=s+(e-s)/2;
    //int m=(s+e)/2;
        if(t==arr[m]){
            return m;
        }else{
            if(arr[m]>t){
                //reduce the size of the searching space from [s,e] to [s,m-1]
                e=m-1;
            }else{//reduce the searching space from [s,e] to [m+1,e]
            s=m+1;
            }

        }
    }
    //t not found in the arr[]
    return -1;

}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(int);

    int t=60;

    cout<<BinarySearch(arr,n,t)<<endl;
    return 0;
}