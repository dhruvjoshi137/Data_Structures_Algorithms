#include<iostream>
using namespace std;

class customer{
    private:

    public:
    string name;
    int age;
    char gender;
    double credits;

    customer(string n , int a , char g , double c){
        cout<<"inside the parametrised constructor \n"<<endl;
        name=n;
        age=a;
        gender=g;
        credits=c;

    }

    string getname() const{
        return name;
    }
    void setname(string n){
        name=n;
    }

    int getage() const{
        return age;
    }
    void setage(int a){
        age=a;
    }
    int chargender() const{
        return gender;
    }
    void setgender(char g){
        gender=g;
    }

    int getcredits() const{
        return credits;
    }
    void setcredits(double c){
        credits=c;
    }

    void print()const{
        cout<<"name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"gender"<<gender<<endl;
        cout<<"credits"<<credits<<endl;
    }
};
    

    int main(){

        const customer c("dhruv",18,'M',2000);

        cout<<c.name<<endl;
        cout<<c.age<<endl;
        cout<<c.gender<<endl;
        cout<<c.credits<<endl;

        //c.name="dhruvaaa"//this will give me an error because i hvae used const class object and all the attributes have become read only and i can not edit them now.

        customer c1("dhruvi",18,'F',0);
        c1.age=13;
        cout<<c1.age<<endl;
        cout<<c1.gender<<endl;;
        
        c.print();
        return 0;

    }