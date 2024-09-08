#include<iostream>
using namespace std;

class customer{
    private:

    string name;
    int age;
    char gender;
    double credits;

    public:
    string getName(){
        return name;
    }
    void setName(string n){
        name=n;
    }

    int getAge(){
        return age;
    }
    void setAge(int a){
        age=a;
    }

    char getGender(){
        return gender;
    }
    void setGender(char g){
        gender=g;
    }

    double getCredits(){
        return credits;
    }
    void setCredits(double c){
        credits=c;
    }


    void print(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
        cout<<"Credits = "<<credits<<endl;
    }
};

int main(){

    customer c;

    c.setName("Arjun Vailly");
    c.setAge(30);
    c.setGender('M');
    c.setCredits(1000);

    c.print();
    cout<<c.getName()<<endl;
    cout<<c.getCredits()<<endl;
    cout<<c.getAge()<<endl;
    cout<<c.getGender()<<endl;
    return 0;
}