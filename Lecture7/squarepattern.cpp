#include<iostream>
using namespace std;
 int main(){
    int i,n;
    cin>>n;
    i=1;
    while(i<=n){
        for(int j=1;j<=i;j++){
            cout<<i<<"";

        }
        for(int c=i+1;c<=n;c++){
            cout<<c<<"";

        }
        cout<<endl;
        i++;
        return 0;
    }

}