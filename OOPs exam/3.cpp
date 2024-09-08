#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int rollno;

    student(){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"Enter rollno"<<endl;
        cin>>rollno;
        cout<<endl;

    }
    void print(){
        cout<<name<<endl<<age<<endl<<rollno<<endl;
    }
};

    int main(){
        student s;
        s.print();
        return 0;
    }