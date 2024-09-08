#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int j = s;
    int i = s - 1;
    int pivot = arr[e];
    while (j < e)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // recursive case
    //  partition the array around the pivot i.e arr[e]..

    int pi = partition(arr, s, e);
    // recursively sort the left partition , arr(s....pi-1)
    quicksort(arr, s, pi - 1);
    // recursively sort the right partition , arr[pi+1.....e]
}
int main()
{
    int arr[] = {60, 50, 20, 10, 40, 30};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "the kth largest element in the array is " << arr[k] << endl;
    return 0;
}
