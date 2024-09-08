#include<iostream>
using namespace std;
int main(){
    int n = 169;
    int m = 10;
    int i=3,j=6;
    int m1=-1<<(j+1);
    int m2=(1<<i)-1;
    int mask=m1|m2;

    n=n&mask;

    cout<<(n|(m<<i))<<endl;
    return 0;
}