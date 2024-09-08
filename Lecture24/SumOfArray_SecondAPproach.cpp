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
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int); // integer stores 4 bit , 5*4 = 20 , 20/4 = 5 , that means mere paas n =5 , i have 5 integers stored in this arr
    cout << f(arr, n - 1) << endl;
}