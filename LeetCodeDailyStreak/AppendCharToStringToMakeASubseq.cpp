#include<iostream>
using namespace std;
int main(){
    string s="coaching";
    string t="coding";
    int m=s.size();
    int n=t.size();
    int i=0,j=0;
    while(i<m && j<n){
        if(s[i]==t[j]){
            j++;
        }
        i++;
    }
    int result=n-j;
    cout<<result<<endl;
    return 0;
}