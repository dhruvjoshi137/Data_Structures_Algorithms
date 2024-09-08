#include<iostream>
using namespace std;
int main(){
    int a=21;
    if((a&1)==0){
        cout<<a<<" is even "<<endl; 
    }else{
        cout<<a<<" is an odd number "<<endl;
    }
}