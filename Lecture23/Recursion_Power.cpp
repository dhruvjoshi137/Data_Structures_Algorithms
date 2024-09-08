#include<iostream>
using namespace std;
int f(int x, int y){
    //base case

    if(y==0){
        return 1;
    }

    //recursive case
    //ask your friend to find x^y-1;
    int A = f(x,y-1);
    return A*x;
}

int main(){
    int x = 5;
    int y = 4;
    cout<<f(x,y)<<endl;
    return 0;
}