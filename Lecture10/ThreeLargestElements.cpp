#include<iostream>
using namespace std;
int main(){
    int arr[]={20,5,0,25,15,10};
    int n =sizeof(arr)/sizeof(int);

    int fL=INT16_MIN;
    int sL=INT16_MIN;
    int tL=INT16_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>fL){
            tL=sL;
            sL=fL;
            fL=arr[i];
        }else if(arr[i]>sL){
            tL=sL;#
            sL=arr[i];
        }else if(arr[i]>tL){
            tL=arr[i];
        }
    }

    cout<<fL<<' '<<sL<<' '<<tL<<' '<<endl;
    return 0;

}