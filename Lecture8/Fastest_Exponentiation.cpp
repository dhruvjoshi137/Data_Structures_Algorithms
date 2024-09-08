#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int a=4;

    int res=1;
    int wgt=a;

    while(n>0){
        int rightmostbit=n&1;
        if(rightmostbit==1){
            res=res*wgt; 
        }
        wgt=wgt*wgt;
        n=n>>1;
    }
    cout<<res<<endl;
    return 0;
}