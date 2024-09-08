// #include<iostream>
// using namespace std;
// int main(){
//     int arr[100];
//     int n;
//     cout<<"enter number of values you want to enter in the array";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
// }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
// }

#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter the va;ues you want to add in the array - "<<endl;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;
}