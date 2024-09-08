#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class dog : public animal{

};

class germanshepherd : public dog{

};

int main(){
    dog d1;
    d1.bark();
    dog g1;
    g1.bark();
    return 0;
}