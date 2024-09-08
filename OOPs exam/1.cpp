#include<iostream>
using namespace std; 
class tyson{
    string name;
    int age;
    int rollno;

    public:
    tyson (){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter rollno"<<endl;
        cin>>rollno;

    }

    void print(){
        cout<<name<<" "<<age<<" "<<rollno;

    }
};

    int main(){
        tyson s;
        s.print();
        return 0;
    }
