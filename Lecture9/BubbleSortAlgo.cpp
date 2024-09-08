#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    int cnt=0;

    for(int i=1;i<=n-1;i++){
        bool flag = false; // assuming no swaps will be done in the ith pass

        //in the ith passes of the bubblesort algo. place the largest element in the unsorted part of the arr[] to its sorted part/correct position
        for(int j=0;j<n-i;j++){
            cnt++;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }if(flag == false){
            break;
        }

    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"the number of comparisons done is " <<cnt;
    return 0;
}