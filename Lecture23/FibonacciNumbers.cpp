#include<iostream>
using namespace std;
int f(int n){
    //base case
    if(n==0|n==1){
        return n;
    }
    //rercursive case
    //find the nth fib. no 
    //1. ASK YOur friend to find the n-1th fibo no
    int A=f(n-1);

    //2. ask ur friend to find the n-2th fibo no

    int B=f(n-2);
    return A+B;
}

int main(){
    int n=9;
    cout<<f(n)<<endl;
    return 0;
}