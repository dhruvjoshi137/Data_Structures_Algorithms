#include<iostream>
using namespace std;
int main(){
    float sqrt,n;
    cout<<"enter a non negative number : ";
    cin>>n;
    sqrt=0;
    while(sqrt*sqrt<=n){
        sqrt=sqrt+1;

    }sqrt=sqrt-1;
    cout<<sqrt<<endl;
    return 0;
}