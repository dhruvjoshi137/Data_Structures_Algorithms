#include<iostream>
using namespace std;

class customer {
    public:
    string* namePtr;
    int age;
    char gender;
    double credits;

    customer (string n , int a , char g , double c ){
        namePtr = new string;
        *namePtr=n;
        age=a;
        gender=g;
        credits=c;


    }

    string getName(){
        return *namePtr;

    }
    void setName(string n){
        *namePtr=n;
    }

    void print (){
        cout<<"name = "<<*namePtr<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
        cout<<"credits = "<<credits<<endl<<endl;

    }
};

    int main(){

        customer c1("Dhruv " , 18 , 'M' , 2000);
        c1.print();
        customer c2=c1;
        c2.print();
        
        c2.age=20;
        c2.gender = 'F';
        c2.credits = 0 ; 

        c1.print();
        c2.print ();

        c2.setName("AryaBhatta");

        cout<<c1.getName()<< " " <<c2.getName()<<endl;
        return 0;

    }



    // in this thing , what has actually happened is , we performed a simple example of what shallow copying does , i changed the name of the c2 object
    // but c1's name also got changed to aryabhatta even if i had not changed c1's name , it has changed with c2's 

    