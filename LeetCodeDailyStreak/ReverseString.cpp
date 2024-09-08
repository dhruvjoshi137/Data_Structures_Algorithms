// #include<iostream>
// using namespace std;
// int main(){
//     string str[]={"I","L","O","V","E","Y","O","U"};
//     int n=sizeof(str)/sizeof(string);
    
//     for(int i=n-1;i>=0;i--){
//         cout<<str[i];
//     }
//     cout<<endl;
//     return 0;

// }


#include<iostream>
using namespace std;
int main(){
    string str="hannah";
        int n = str.size(); // Get the correct size
        for (int i = 0; i < n / 2; i++) {
            swap(str[i], str[n - i - 1]); // Swap elements to reverse
        }
        cout<<str<<endl;
    }



