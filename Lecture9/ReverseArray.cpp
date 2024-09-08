// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50,60,70};
//     int n=sizeof(arr)/sizeof(int);
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
        
//     }


#include<iostream>
using namespace std;
int main(){
    int arr[]={33,36,39,42,45,48,99,100};
    int i=0;
    int n=sizeof(arr)/sizeof(int);
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={20,30,40,50,60,70};
//     int n = sizeof(arr)/sizeof(int);
//     int i = 0;
//     int j = n-1;
//     // for(int i=0;i<j;i++){
//     //     swap(arr[i],arr[j]);
//     //     j--;
//     // }
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }