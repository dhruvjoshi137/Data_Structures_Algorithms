#include <iostream>
using namespace std;
void f(int n, char s, char d, char h)
{ // s = source , h = helper , d = destination
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive case

    // 1. ask your friend to move n-1 disks from A(source) to B(helper) using C(destination)
    f(n - 1, s, h, d);

    // 2. Move the largest disk from A(source) to  C(Destination)

    cout << "move disk from " << s << "to" << d << endl;

    // 3. ask your friend to move n-1 disks from B(Helper) to C(Destination) using A(source)

    f(n - 1, h, d, s);
}

int main()
{
    int n = 3;
    f(n, 'A', 'C', 'B');
    return 0;
}