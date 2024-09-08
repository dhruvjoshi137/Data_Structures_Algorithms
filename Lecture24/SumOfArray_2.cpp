#include <iostream>
using namespace std;
int f(int arr[], int i)
{
    // base case
    if (i == 0)
    {
        return arr[0];
    }
    // recursive case
    return f(arr, i - 1) + arr[i];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << f(arr, n - 1) << endl;
    return 0;
}