#include<iostream>
using namespace std;
class animal {
    public:
    int age;
    int weight;
    void bark(){
        cout<<"barking"<<endl;
    }
};
class human {
    public:
    void speak(){
    cout<<"speaking"<<endl;
    }
};
class dog : public human , public animal {};
int main(){
    dog d1;
    d1.speak();
    d1.bark();
    return 0;
}

