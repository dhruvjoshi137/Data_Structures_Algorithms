#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a positive integer";
    cin>>n;
    int i=1;
    int num=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<num<<" ";
            num++;
            j++;

            
        }
        cout<<endl;
        i++;

    }return 0;
}