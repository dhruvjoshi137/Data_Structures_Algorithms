#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;

    customer(string n , int a , char g , double c )
    :name(n),age(a),gender(g),credits(c)
    {
        cout<<endl<<"i am inside the parameterised constructor of the customer class" <<endl;
    }
    
    void print(){
        cout<<"name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"gender"<<gender<<endl;
        cout<<"credits"<<credits<<endl;

    }

};


int main(){
    customer c1("ramanujan",32,'M',1700);
    c1.print();
    customer c2("dhruv",18,'M',2000);
    c2.print();
    return 0;
}