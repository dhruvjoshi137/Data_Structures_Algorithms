#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter a positive integer"<<endl;
    cin>>n;
    sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}