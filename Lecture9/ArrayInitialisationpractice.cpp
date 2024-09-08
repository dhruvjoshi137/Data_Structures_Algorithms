#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int arr[]={23,25,27,29,31};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int B[5]={};
    for(int i=0;i<5;i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
    int C[5]={};
    memset(C,0,sizeof(C));
    for(int i=0; i<5; i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;
    
    int D[5]={};
    memset(D,-1,sizeof(D));
    for(int i=0;i<5;i++){
        cout<<D[i]<<" ";

    }
    cout<<endl;
    int E[]={};
    memset(E,1,sizeof(E));
    for(int i=0;i<5;i++){
        cout<<E[i]<<" ";

    }
    return 0;
} 