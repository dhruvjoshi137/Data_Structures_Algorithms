#include<iostream>
using namespace std;
class animal{
    public:
    int age = 17;
    int weight =80;
    void speak(){
        cout<<"speaking"<<endl;
        cout<<age<<endl;
    }
    };
    class dog : public animal {};
    int main(){
    dog d1;
    d1.speak();
    cout<<d1.weight<<endl;
    cout<<d1.age<<endl;

    return 0;
    }