#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a positive number";
    cin>>n;
    int i=1;
    while(i<=n){
        //print n-i spaces
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        } 
        //followed by i numbers in the increasing order starting with i
        j=1;
        int num=i;
        while(j<=i){
            cout<<num;
            num++;
            j++;
        }
        //followed by i-1 numbers in the decreasing order starting with 2i-1 or starting with the digit before the digit in the end of the increasing order 
        int number = 2*i-2;
        //or num=num-2;
        j=1;
        while(j<=i-1){
            cout<<number;
            j++;
            number--;
        }
        //num=2*i-2 (we can use the num variable again)
        cout<<endl;
        i++;

    }
}