#include<iostream>
using namespace std;
int main(){
    int n=169;
    int k =4;
    int mask=(-1<<k); //(~0<<k)

    cout<<(n&mask)<<endl;
    return 0;
}