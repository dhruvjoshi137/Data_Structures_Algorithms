#include<iostream>
using namespace std;
int main(){
    int rev,n,d;
    cout<<"enter a positive integer"<<endl;
    cin>>n;
    rev=0;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    cout<<"the reversed number is "<<rev<<endl;
    return 0;
}