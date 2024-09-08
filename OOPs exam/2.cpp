//Default Constructor

#include<iostream>
using namespace std;
class construct{
    public:
    int a;
    int b;

    construct(){
        a=10;
        b=20;
    }
};

int main(){
    construct c;
    cout<<"first - "<<c.a<<"second - "<<c.b;
    return 0;
}