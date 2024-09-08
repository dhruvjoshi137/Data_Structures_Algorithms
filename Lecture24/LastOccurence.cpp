#include <iostream>
using namespace std;
int f(int X[], int t, int i)
{
    // base case
    if (i == -1)
    {
        // find the index of the last occurence of the tagret in X[0..-1]
        return -1;
    }
    // recursive case
    // find the index of the last occurence of the tagret in X[0.....i]
    if (X[i] == t)
    {
        return i;
        // youve found the index of the last occurence of 't'
    }

    // recursively find the index of the last occurence of the target in X[0....n-1]
    return f(X, t, i - 1);
}
int main()
{
    int X[] = {10, 20, 30, 20, 30};
    int n = sizeof(X) / sizeof(int);
    int t = 20;
    cout << f(X, t, n - 1) << endl;
    return 0;
}