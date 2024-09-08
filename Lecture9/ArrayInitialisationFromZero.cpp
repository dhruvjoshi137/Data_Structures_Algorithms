#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int arr[5]={10,20,30};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int A[5]={}; //if the array does not contain any value , then all the elements are set to 0 , if printed , it prints 0 the number of times the array has been allocated the space 
    for (int i=0;i<5;i++){
        cout<<A[i]<<" ";   
        }
        cout<<endl;

    int B[5]={};
    memset(B,0,sizeof(B));
    for(int i=0;i<5;i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
    int C[16]={};
    memset(C,-1,sizeof(C));
    for(int i=0;i<16;i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;
    int E[]={};
    memset(E,1,sizeof(E)); //memset only works for 0 and -1 , if we put some value other than 0 anf -1 , it takes it as -1 only and prints it 
    for(int i=0;i<5;i++){
        cout<<E[i]<<" ";
    }
    return 0;

    }