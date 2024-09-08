#include<iostream>
using namespace std;

class customer {
    public :
    string* namePtr;
    int age;
    char gender;
    double credits;

    customer ( string n , int a , char g , double c){
        namePtr = new string;   // i want my name to be stored on a heap
        *namePtr = n;    // i want my name to be stored on a heap 
        age=a;
        gender=g;
        credits=c;
    }

    void print (){
        cout<<"name = "<<*namePtr<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
        cout<<"credits = "<<credits<<endl;
        cout<<endl;
    }
};

int main(){
    customer c (" dhruv " , 18 , 'M' , 10000);
    c.print();
    return 0;

}