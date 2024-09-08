#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{

    int j = s;
    int i = s - 1; // j-1
    int pivot = arr[e];
    while (j < e)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
        j++;
    }
    swap(arr[i + 1], arr[e]);

    return i + 1;
}
int QuickSelect(int arr[], int s, int e, int k)
{

    int pi = partition(arr, s, e);

    if (pi == k)
    {

        return arr[pi];
    }
    else if (k < pi)
    {
        // you are searching for an element less than the pivot and you can only find it in the left partition
        return QuickSelect(arr, s, pi - 1, k);
    }
    else
    {
        // you are searching for an element greater than the pivot and you can only find it in the right partition
        return QuickSelect(arr, pi + 1, e, k);
    }
}
int main()
{
    int arr[] = {2, 7, 5, 3, 8, 4};
    int n = sizeof(arr) / sizeof(int);
    int k = 6;
    cout << QuickSelect(arr, 0, n - 1, k) << endl;
    return 0;
}