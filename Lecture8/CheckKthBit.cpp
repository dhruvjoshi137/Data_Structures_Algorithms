#include<iostream>
using namespace std;
int main(){
    int n=42;
    int k=3;
    int mask=1<<k;

    int result = n&mask;
    if(result == 0){
        cout<<"Kth bit is not set"<<endl;

    }else{
        cout<<"Kth bit is set "<<endl;
    }
    if(((n>>k)&1==0)){
        cout<<"false"<<endl;

    }else{
        cout<<"true"<<endl;
    }
    return 0;
}