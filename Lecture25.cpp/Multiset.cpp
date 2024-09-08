#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    cout << s.size() << endl;
    cout << endl;
    for (int x : s)
    {
        cout << x << " ";
    }
    return 0;
}