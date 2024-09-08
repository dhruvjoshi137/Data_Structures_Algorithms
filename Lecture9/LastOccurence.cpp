// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,60,20,10};
//     int n=sizeof(arr)/sizeof(int);
//     int i;
//     int t=80;
//     for(i=n-1;i>=0;i--){
//         if(arr[i]==t){
//             cout<<t<<"was found at"<<i;
//             break;   
//         }
//     }
//     if(i==-1){
//         cout<<t<<"was not found";

//     }
//     return 0;

//     }
    
#include<iostream>
using namespace std;
int main(){
    int arr[]={20,30,40,50,60,70,80,90,100};
    int n=sizeof(arr)/sizeof(int);
    int t= 60;
    int i;
    for(i=n-1;i>=0;i--){
        if(arr[i]==t){
            cout<<"target was found at "<<i<<endl;
            break;
        }
    }
    if(i==-1){
        cout<<"target was not found";
    }
    return 0;
}