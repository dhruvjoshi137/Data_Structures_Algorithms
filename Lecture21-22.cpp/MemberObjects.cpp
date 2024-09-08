#include<iostream>
using namespace std;
class creditcard{
    public:
    string cardNumber;
    string bankName;

    creditcard(){
        cout<<endl<<"i am inside the default constructor of creditcard \n";

    }
    creditcard(string cn,string bn){
        cout<<endl;<<"i am inside the parametrised constructor of creditcard\n";
        cardNumber=cn;
        bankName=bn;

    }
};

class customer{

    public:

    string name;
    int age;
    char gender;
    double credits;
    creditcard card;

    // customer(string n, int a , char g , double c){
    //     cout<<"\n inside the parametrised constructor of customer class\n";
    //     name=n;
    //     age=a;
    //     gender=g;
    //     credits=c;
    //     card.cardNumber=cn;
    //     card.bankName=bn;

    // }

    customer(string n,int a, char g , double c,string cn,string bn):
    card(cn,bn){
        cout<<"\n inside the parametrised constructor of customer class\n";
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
        cout<<"card number = "<<card.cardNumber<<endl;
        cout<<"bank name  = "<<card.bankName<<endl;
    }
};


     int main(){
        customer c("dhruv",18,'M',1000,1234567890,"UBI");
        c.print();
        return 0;
        

     }