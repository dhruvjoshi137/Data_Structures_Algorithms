#include<iostream>
using namespace std;

class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;
};

// void printByValue(customer c){
//     cout<<"name = "<<c.name<<endl;
//     cout<<"age = "<<c.age<<endl;
//     cout<<"gender = "<<c.gender<<endl;
//     cout<<"credits = "<<c.credits<<endl<<endl;

// void printByRef(customer& c){
//      cout<<"name = "<<c.name<<endl;
//      cout<<"age = "<<c.age<<endl;
//      cout<<"gender = "<<c.gender<<endl;
//      cout<<"credits = "<<c.credits<<endl<<endl;

     void printByConstRef(const customer& c){
     cout<<"name = "<<c.name<<endl;
     cout<<"age = "<<c.age<<endl;
     cout<<"gender = "<<c.gender<<endl;
     cout<<"credits = "<<c.credits<<endl<<endl;

     //to avoid copy...
}

int main(){
    customer c1; //object declaration
    c1.name="Dhruv";
    c1.age=18;
    c1.gender='m';
    c1.credits=1000;
    
    //printByValue(c1);
    //printByRef(c1);
    printByConstRef(c1);


    customer c2;

    c2.name="divyanshu";
    c2.age=19;
    c2.gender='m';
    c2.credits=0;
    printByConstRef(c2);

    return 0;
}