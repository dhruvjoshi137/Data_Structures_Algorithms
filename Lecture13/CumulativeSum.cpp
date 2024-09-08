#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(int);

    int sum[100];
    int csum[101];

    //we need to create csum[n+1] which takes roughly n+1 amount of extra space  , take it as n 

    for(int i=0;i<=n;i++){
        csum[i]=csum[i-1]+arr[i-1];
    }

    //n steps to compute csum[]

    //n^2 steps to compute the maximum subarray sum 

    int lsf=INT32_MIN;

    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            
            //compute the sum of the subarray that starts at the ith index and ends at the jth index

            int sum=csum[j+1]-csum[i];
            lsf=max(lsf,sum);

        }

    }

    //total steps = n+n^2 = O(n^2)
    //space = O(n)
    
    cout<<lsf<<endl;
    return 0;
}