#include<iostream>
using namespace std;
string MoveX(string str , int n ){

    //base case 
    if(n==0){
        return "";
    }
    //recursive case 

    string substring = str.substr(1);
    string StringFromMyFriend =MoveX(substring, n-1);
    return str[0]=='x' ? StringFromMyFriend+str[0] : str[0] + StringFromMyFriend; 
}
int main(){
    string str = "xaxbxc";
    int n = str.size();
    cout<<MoveX(str,n)<<endl;
    return 0;
}