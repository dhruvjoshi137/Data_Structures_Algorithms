#include <iostream>
using namespace std;
int f(int X[], int s, int e)
{

    // base case
    if (s == e)
    {
        return X[s]; // X[e]
    }
    // recursive case
    // find the sum of X[s.....e]
    int m = s + (e - s) / 2;
    // ask your friend to calculate the sum of the array that starts at s and ends at m
    int A = f(X, s, m);
    // ask your friend to calculate the sum of array that starts at m+1 and ends at e
    int B = f(X, m + 1, e);

    return A + B;
}
int main()
{
    int X[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(X) / sizeof(int);
    cout << f(X, 0, n - 1) << endl;
}