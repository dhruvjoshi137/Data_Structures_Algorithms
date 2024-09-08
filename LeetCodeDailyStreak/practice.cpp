#include<iostream>
using namespace std;
int main(){
    string s1;
    string s2;
    cout<<"enter the words you want to be compared = "<<endl;
    cin>>s1>>s2;
    int m=s1.size();
    int n=s2.size();
    int i=0,j=0;
    while(i<m && j<n){
        if(s1[i]==s2[j]){
            j++;
        }
        i++;
    }
    int result = n-j;  // coaching/coding = 8/6 = 6-2 = 4 answeer
    cout<<result<<endl;
    return 0;
} 