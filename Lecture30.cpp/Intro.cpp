#include<iostream>
using namespace std;
class Listnode{
    public:
    int val;
    Listnode* next;
    Listnode(int val){
        this ->val=val;
        this->next=NULL;

    }
};
int main(){
    Listnode* n = new Listnode(10);

    cout<<(*n).val<<endl;
    cout<<n->val<<endl;

    return 0;
}