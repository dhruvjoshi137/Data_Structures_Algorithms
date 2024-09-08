#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a positive number";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int num;
        if(i%2==0) num=0; else num=1;
         

        while(j<=i){
            j++;
            cout<<num<<" ";
        }
        cout<<endl;
        i++;
    }
}