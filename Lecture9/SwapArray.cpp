#include<iostream>
using namespace std;
int main(){
    int a=50;
    int b=60;
    // swap(a,b);
    // cout<<a<<" "<<b<<endl;
    // int temp=a;
    // a=b;
    // b=temp;
    // cout<<a<<" "<<b<<endl;
    // a=a^b;
    // b=a^b;
    // a=a^b;
    // cout<<a<<" "<<b<<endl;
    // a=a+b; //50+60=110
    // b=a-b; //110-60=50
    // a=a-b; //110-50=60
    // cout<<a<<" "<<b<<endl;

    a= (a+b)-(b=a);
    cout<<a<<" "<<b<<endl;
}