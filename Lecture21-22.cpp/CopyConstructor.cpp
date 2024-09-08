#include<iostream>
using namespace std;

class customer {
    public:

    string name;
    int age;
    char gender;
    double credits;

    customer ( string n , int a , char g , double c ){
    cout<<"i am inside the parameterised constructor of the customer class \n";
    name=n;
    age=a;
    gender=g;
    credits=c;
    }

    customer ( const customer& c){
        cout<<"i am inside the copy constructor of the customer class \n";
        name=c.name;
        age=c.age;
        gender=c.gender;
        credits=c.credits;

    }

    void print(){
        
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
        cout<<"credits = "<<credits<<endl;
        cout<<endl;

    }


};

int main(){
    
    customer c1 ( "DhruvSharma" , 18 , 'M' , 1000);

    c1.print();

    // customer c2 = c1;
    customer c2(c1); // copy constructor is invoked here
    c2.name="Aryabhatta"; //c2 ke edits , c1 nhi dekh sakta
    c2.print(); // copy construtcor is invoked here 

    return 0;
}