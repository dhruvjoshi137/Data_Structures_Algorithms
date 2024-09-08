#include<iostream>
using namespace std;
int main(){
    int x=10;//global variable
    cout<<x<<endl;{
        int y=30;//local variable
        int x=20;//local variable
        cout<<x<<" "<<y<<endl;
    }
    cout<<x<<endl; //the x declared as the global variable will be printed here0
    return 0;

}