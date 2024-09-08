#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;
    
    customer(string n,int a,char g,double c){
        name=n;
        age=a;
        gender=g;
        credits=c;
    }

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}


};

int main() {

	customer c1("Dhruv",18,'M',1000);
    c1.print();
    customer c2("Divyanshu", 19 , 'M',1000);
    c2.print();
    customer c3("Vedant",19,'F',0);
    c3.print();
    return 0;
}  


//redundancy is now reduced....

