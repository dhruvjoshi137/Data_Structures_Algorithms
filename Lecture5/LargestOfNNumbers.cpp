#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    int x;
    cin>>x;
    int lsf=x;
    int i=2;
    while(i<=n){
        cin>>x;
        if(x>lsf){
            lsf=x;
        }
        i++;

    }cout<<x<<<endl;
return 0;
}