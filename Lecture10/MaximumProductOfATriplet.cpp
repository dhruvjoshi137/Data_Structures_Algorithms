#include<iostream>
using namespace std;
int main(){
    int arr[]={-777,248,555,-786,222,234};
    int n=sizeof(arr)/sizeof(int);
    int fS,sS;
    fS=INT16_MAX;
    sS=INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<fS){
            sS=fS;
            fS=arr[i];
        }else if(arr[i]<sS){
            sS=arr[i];
        }
    }
    cout<<"second smallest = "<<sS<<endl<<"first smallest = "<<fS<<endl;
    
    int fL=INT16_MIN;
    int sL=INT16_MIN;
    int tL=INT16_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>fL){
            tL=sL;
            sL=fL;
            fL=arr[i];
        }
        else if(arr[i]>sL){
            tL=sL;
            sL=arr[i];
        }else if(arr[i]>tL){
            tL=arr[i];
        }
    }
    cout<<"first largest = "<<fL<<endl<<"second largest = "<<sL<<endl<<"third largest = "<<tL<<endl;

    cout<<max(fS*sS*fL,fL*sL*tL)<<endl; //optional , better also

    int FirstProduct=fS*sS*fL;
    int SecondProduct=fL*sL*tL;

    cout<<max(FirstProduct,SecondProduct)<<endl; 
    cout<<"second product is = "<<SecondProduct<<endl;

    if(FirstProduct>SecondProduct){
        cout<<"the largest triplet product is = "<<FirstProduct; 
    }else{
        cout<<"the largest triplet product is = "<<SecondProduct;
    }
    return 0;
}