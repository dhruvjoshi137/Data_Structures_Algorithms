#include<iostream>
using namespace std;
int x=100;//global variable
int main(){
    int x=10;//local variable 
    cout<<x<<" "<<::x<<endl;
    x=x+1;
    ::x=::x+2;
    cout<<x<<" "<<::x<<endl;
    return 0; 

}




//We can use :: i.e. ScopeResolution Operator to call a value even outside from a scope.. 
//In this question , 100 was the global variable and we called 100 in the local variable block by using :: (scope resolutoon operator)..