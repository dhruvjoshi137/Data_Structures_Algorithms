#include <iostream>
using namespace std;
int f(int X[], int t, int s, int e)
{

    // base case
    if (s > e)
    {
        return -1;
    }

    // recursive case

    int m = s + (e - s) / 2;
    if (X[m] == t)
    {
        return m;
    }
    else if (t > X[m])
    {
        return f(X, t, m + 1, e);
    }
    return f(X, t, s, m - 1);
}
int main()
{
    int X[] = {10, 20, 30, 40, 50};
    int n = sizeof(X) / sizeof(int);
    int t = 40;
    cout << f(X, t, 0, n - 1) << endl;
    return 0;
}