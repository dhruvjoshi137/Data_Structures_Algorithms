#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"enter a number "<<endl;
    cin>>c;
    int i=0;
    int j=sqrt(c);
    if(j*j==sum){
        return true;
    }
    while(i<=j){
        if(i*i+j*j==sum){
            return true;
        }else if(sum>=c){
            j--;
        }else{
            i++;
        }
    }
    cout<<sum<<endl;
    return 0;
    }