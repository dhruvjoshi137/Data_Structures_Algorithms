#include<iostream>
using namespace std;
int main(){
    int cnt=0;
    int maxsofar=0;
    int n=316;
    while(n>0){
        if((n&1)==1){
            cnt++;
            if(cnt>maxsofar) maxsofar=cnt;
        }else{
            //0th bit of n is not set i.e 0
            cnt=0;
        }
        n=n>>1;
    }
    cout<<maxsofar<<endl;
    return 0;
}