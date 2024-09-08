#include <iostream>
using namespace std;
bool isSorted(int X[], int n, int i)
{

    // base case

    if (i == n - 1)
    {
        // check if X[n-1....n-1] = {X[n-1]}
        return true;
    }

    // recursive case

    return X[i] < X[i + 1] && isSorted(X, n, i + 1);
}
int main()
{
    int X[] = {10, 20, 30, 40, 50};
    int n = sizeof(X) / sizeof(int);
    cout << isSorted(X, n, 0) << endl;
}