#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    i>0 ? cout<<"+ve"<<endl :
            i<0 ? cout<<"-ve" : cout<<"0"<<endl;
return 0;
}