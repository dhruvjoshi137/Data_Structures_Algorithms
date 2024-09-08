#include<iostream>
using namespace std;  

class customer {
    string* namePtr;
    int age;
    char gender;
    double credits;

    costumer(string n , int a , char g , double c ){
        cout<<"i am inside the parametrised constructor of customer class "<<endl;
       namePtr = new string ;
       *namePtr = n;
       age = a ;
       gender = g;
       credits = c;
    }

    customer ( const customer& c ){
        namePtr = new string ;
        namePtr = *c.namePtr;
        age = c.age;
        gender = c.gender;
        credits = c.credits 
    }

    string getName(){
        return *namePtr;
    }
    string setName(string n ){
        *namePtr = n
    }

    void print (){
        cout<<"name = "<<namePtr<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
        cout<<"credits = "<<credits<<endl;
        cout<<endl;
    }

    int main(){
        customer c1("ramanujan ", 32 , 'M' , 1729 );
        customer c2=c1;
        c2.print();

        c2.setName("Dhruv");
        cout<<c1.getName()<<" "<<c2.getName()<<endl;
        return 0; 
    }
    
}