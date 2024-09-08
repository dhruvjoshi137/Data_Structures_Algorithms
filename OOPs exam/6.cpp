#include<iostream>
using namespace std;
class copy {
    public:
    int id;

    void init(int id){
        id=x;
    }
    copy(){}
    copy(const copy& other){
        id=other.id;
    }
    
}