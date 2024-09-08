#include<iostream>
using namespace std;
int main(){
    cout<<"enter an integer";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;


        }
        i++;
        cout<<endl;
    }
    return 0;
}