#include<iostream>
using namespace std;
int main(){
    int n,j;
    cin>>n;
    int i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
}