#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(int);
    int lsf=INT32_MIN;

    for(int i=0;i<n;i++){ //saare starting indices pe iterate
        for(int j=i;j<n;j++){ //saare ending indices pe iterate
            int sum=0;
            for(int k=i;k<=j;k++){ //compute the sum of the subarray that starts at the ith index and ends at the jth index 
                sum=arr[k]+sum; //sum+=arr[k]
            }
            lsf=max(sum,lsf);
        }
    }
    cout<<lsf<<endl;
    return 0;
}