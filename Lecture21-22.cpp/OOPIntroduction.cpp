#include<iostream>
using namespace std;

class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;
};
int main(){
    customer c1; //object declaration
    c1.name="Dhruv";
    c1.age=18;
    c1.gender='m';
    c1.credits=1000;

    cout<<"name = "<<c1.name<<endl;
    cout<<"age = "<<c1.age<<endl;
    cout<<"gender = "<<c1.gender<<endl;
    cout<<"credits = "<<c1.credits<<endl;


    customer c2;

    cin>>c2.name;
    cin>>c2.gender;
    cin>>c2.age;
    cin>>c2.credits;


    cout<<"name = "<<c2.name<<endl;
    cout<<"age = "<<c2.age<<endl;
    cout<<"gender = "<<c2.gender<<endl;
    cout<<"credits = "<<c2.credits<<endl;

    return 0;
}