#include<iostream>
using namespace std;
int main(){
    int n=67;
    int m=51;
    int XOR_RES = n^m;
    //hamming distance between n and m is equal to the number of set bits in XOR_RES
    int cnt=0;
    while(XOR_RES>0){
        cnt++;
        XOR_RES=XOR_RES&(XOR_RES-1);
    }
    cout<<cnt<<endl;
}