#include<iostream>
using namespace std;

class animal{
    public:
     int age;
     int weight;

     public:
     void speaking(){
        cout<<"speaking"<<endl;
     }
};

class dog : public animal{};
int main(){

    dog d;
    d.speaking();
    cout<<d.age<<endl;
    return 0;


}