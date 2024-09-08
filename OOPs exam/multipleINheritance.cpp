#include<iostream>
using namespace std;

class animal{
    int age;
    public:
    void speaking(){
        cout<<"speaking"<<endl;

    }
};
class human{
    int color;
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class hybrid : public animal, public human{};

int main(){
    hybrid obj1;
    obj1.bark();
    obj1.speaking();
    return 0;
}