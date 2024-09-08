#include<iostream>
using namespace std;

string MoveX(string str , int n){


//base case 
if ( n == 0 ){
    return " ";
}

//recursive case 

string SubString = str.substr(1);
string SubStringFromMyFriend = MoveX(SubString , n-1);
if(str[0] == 'x' ){
    return SubStringFromMyFriend + str[0];
}else{
    return str[0]+SubStringFromMyFriend;
}

}

int main(){
    string str = "xaxbxc";
    int n = str.size();
    cout<<MoveX(str , n )<<endl;
    return 0;
}