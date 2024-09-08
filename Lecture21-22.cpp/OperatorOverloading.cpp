#include<iostream>
using namespace std;

class customer {
    public:
    string name;
    int age;
    char gender;
    double credits;

    customer (string n , int a , char g , double c){
        cout<<"i am inside the customer class ";
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

    bool operator > (customer& c){
        return age>c.age;
    }

};

int main(){
    customer c1("ramanujan " , 32 , 'M', 1729);
    customer c2("aryabhatta ", 74 , 'M',0);

    c1.age>c2.age ? cout<<"c1>c2" : cout<<"c1<c2"<<endl;
}