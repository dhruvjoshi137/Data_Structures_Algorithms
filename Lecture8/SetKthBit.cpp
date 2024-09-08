#include<iostream>
using namespace std;
int main(){
    int n=42;
    int k=4;
    
    int mask = 1<<k;
    cout<<(n|(1<<k))<<endl;
    return 0;
}