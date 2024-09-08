#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=15;
    int cnt=0;
    // for(int k=0;k<=31;k++){
    //     int mask = 1<<k;
    //     if((n & mask)>0){
    //         cnt++;
    //     }

    // }

    for(int k=0;k<=ceil(log2(n+1));k++){
        int mask = 1<<k;
        // if((n & mask)>0){
        //     cnt++;
        // }

        if(((n>>k)&1)==1){
            cnt++;
        }

    }
    cout<<cnt<<endl;
    return 0;
}