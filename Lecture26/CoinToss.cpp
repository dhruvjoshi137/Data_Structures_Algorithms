#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void f(char out[], int n, int i)
{

    // base case

    if (i == n)
    {
        // you ve made decisions for all the coins 0 to n-1
        out[i] = '\0';
        cout << out << endl;
        return;
    }

    // recursive case

    // shows head
    out[i] = 'H';
    f(out, 3, i + 1);

    // shows tail
    out[i] = 'T';
    f(out, 3, i + 1);
}

int main()
{
    int n = 3;
    char out[10];
    f(out, n, 0);
    return 0;
}