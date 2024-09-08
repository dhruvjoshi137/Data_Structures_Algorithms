#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of the elements you want to enter"<<endl;
    cin>>n;
    int num;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>num;
        ans=ans^num;
    }
    cout<<ans<<endl;
    return 0;
}