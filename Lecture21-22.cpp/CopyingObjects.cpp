#include<iostream>
using namespace std;

class customer {

    public:
    string name;
    int age;
    char gender;
    double credits;

    customer(string n , int a , char g , double c ){
        name=n;
        age=a;
        gender=g;
        credits=c;
    }
    void print(){
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
        cout<<"credits = "<<credits<<endl;
    }
};

int main(){

    customer c1("Aryabhatta" , 32 , 'M' , 1729);

    c1.print();

    customer c2=c1;

    c2.print();

    return 0;
}