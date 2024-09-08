#include<iostream>
using namespace std;
int main(){
    int n=15;
    int cnt=0;
    while(n>0){
        cnt++;
        n=n&(n-1);
    }
    cout<<cnt<<endl;
    return 0;
}