#include<iostream>
using namespace std;
class tyson{
    public:
    int age;
    char gender;
    string name;

    tyson(){
        cout<<"name";
        cin>>name;
        cout<<"gender";
        cin>>gender;
        cout<<endl;
    }
    void print(){
        cout<<name<<gender<<endl;
    }
    
};
int main(){
    tyson s;
    s.print();
    return 0;
}