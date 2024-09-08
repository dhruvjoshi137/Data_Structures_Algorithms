#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1); // this will be counted as the same element , no duplicacy allowed..
    s.erase(1);
    cout << "size : " << s.size() << endl;
    cout << endl;
    for (auto it = s.begin(), end = s.end(); it != end; it++)
    {
        cout << *it << endl;
    } // ek ek element x ke ander ja rha hai aur print ho rha hai

    for (auto x : s)
    {
        cout << x << endl;
    }
    cout << endl;

    // set<string> str;

    // str.insert("hello");
    // str.insert("dhruv");
    // str.insert("how are you");
    // str.insert("?");
    // cout << "size : " << str.size() << endl;
    // cout << endl;

    // for (auto it = str.begin();, end = str.end(); it != end; it++)
    // {
    //     cout << *it << endl;
    // }

    if (s.find(3) != s.end())
    {
        cout << "3 is present" << endl;
    }
    else
    {
        cout << "3 is absent" << endl;
    }

    s.erase(3);
    if (s.find(3) != s.end())
    {
        cout << "3 is present" << endl;
    }
    else
    {
        cout << "3 is absent" << endl;
    }

    s.clear();
    s.erase((s.find(5)));

    cout << s.size() << endl;
    if (s.empty())
    {
        cout << "yes";
    }
    return 0;
}