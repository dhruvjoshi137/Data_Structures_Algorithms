#include<iostream>
using namespace std;
int main(){
    char ch;
    int ucount=0;
    int dcount=0;
    int lcount=0;
    int wcount=0;
    int scount=0;
    cin>>ch;

    while(true){
        ch=cin.get();
        if (ch=='$'){
            break;
        }
    if(ch>='A' and ch<='Z'){
        ucount++;
    }else if(ch>=0 and ch<=9){
        dcount++;
    }else if(ch>='a' and ch<='z'){
        lcount++;
    }else if(ch=='  ' or ch=='\t' or ch=='\n'){
        wcount++;
    }else{
        scount++;
    }
    cout<<lcount<<endl<<ucount<<endl<<dcount<<endl<<wcount<<endl;
    }
    return 0;
}
