#include <iostream>
using namespace std;
int f(int arr[], int n, int i)
{

    // base case

    if (i == n - 1)
    {
        return arr[n - 1];
    }

    // recursive case

    // find the sum of the subarray of arr[] that starts at the ith index and ends at the n-1th index , arr[i.....n-1]
    return arr[i] + f(arr, n, i + 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    cout << f(arr, n, 0) << endl;
    return 0;
}