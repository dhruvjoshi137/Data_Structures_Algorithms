#include<iostream>
using namespace std;
int main(){
    int n;
    int x;
    cout<<"enter the times you will insert different numbers";
    cin>>n;
    cout<<"enter numbers";
    cin>>x;
    int lsf=x;
    int i=2;
    while(i<=n){
        cin>>x;
        if(x>lsf){
            lsf=x;

        }i++;

    }cout<<lsf<<endl;
return 0;    
}