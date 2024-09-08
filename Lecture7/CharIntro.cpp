#include<iostream>
using namespace std;
int main(){
        char ch='7';
        cout<<ch<<endl;
        cout<<(int)ch<<endl;
        ch='B';
        cout<<ch<<endl;
        cout<<(int)ch<<endl; //this has given me the ascii code of capital B 
        ch='b';
        cout<<ch<<endl;
        cout<<(int)ch<<endl;//this has given me the ascii code for small B.
        ch=65;//this gives me the character that is associated with the ascii code that i just have entered (65=A)
        cout<<ch<<endl;
        ch='7';
        int x=ch;
        cout<<ch<<endl;
        cout<<ch-0<<endl; //this gives me the ascii code of 7 which is 55 
        
    return 0;
    }