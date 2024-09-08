#include<iostream>
using namespace std;
void f(int n){
    //base case

    if(n==0){
        //print no.s from 0 to 1
        return;
    }

    //recursive case

    cout<<n<<" ";

    f(n-1);
    return;
}

int main(){

    int n=5;
    f(n);
    return 0;
}