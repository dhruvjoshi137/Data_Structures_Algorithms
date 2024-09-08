#include <iostream>
using namespace std;

int merge(int arr[], int s, int m, int e)
{
    int i = s;
    int j = m + 1;
    int temp[100];
    int k = s;
    int cnt = 0;

    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            // arr[i]>arr[j] --> you have found an inversion

            temp[k] = arr[j];
            cnt = cnt + m - i + 1;
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= e)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int l = s; l <= e; l++)
    {
        arr[l] = temp[l];
    }

    return cnt;

    // to track the number of inversions
}

int InversionCount(int arr[], int s, int e)
{
    // base case
    // count the number of inversions in arr[s...s] or arr[e....e]
    if (s == e)
    {
        return 0;
    }

    // recursive case
    int m = s + (e - s) / 2;
    // recursively count the number of inversions in the arr[s....e]

    // recursively count the number of inversions in the aarr[s...m] and arr[m+1.....e]
    int x = InversionCount(arr, s, m);
    int y = InversionCount(arr, m + 1, e);

    // count the number of inversions between the left and right subarrays
    int z = merge(arr, s, m, e);
    return x + y + z;
}
int main()
{
    int arr[] = {2, 7, 5, 8, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << InversionCount(arr, 0, n - 1) << endl;
}