#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;

    customer(){
        cout<<"inside the default constructor of the customer class"<<endl;
    }


    void print(){
        cout<<"name ="<<name<<endl;
        cout<<"age ="<<age<<endl;
        cout<<"gender ="<<gender<<endl;
        cout<<"credits ="<<credits<<endl;
    }
};

int main(){
    customer c1;
    c1.name = "Ramanujan";
	c1.age = 32;
	c1.gender = 'M';
	c1.credits = 1729;
    c1.print();

}