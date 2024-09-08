#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"enter a non negative number : "<<endl;
    cin>>n;
    
    cin>>p;

    float squareroot=0;
    while(squareroot*squareroot<=0){
        squareroot=squareroot+1;

    }squareroot=squareroot-1;
    int i=0;
    float inFac=0.1;
    while(i<=p){
        while(squareroot*squareroot<=n){
            squareroot=squareroot+inFac;
        }
        squareroot=squareroot-inFac;
        inFac=inFac/10;
        i=1+1;
    }
    cout<<squareroot<<endl;
    return 0;
}