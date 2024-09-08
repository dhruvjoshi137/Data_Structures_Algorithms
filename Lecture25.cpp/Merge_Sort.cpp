#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int m, int e)
{
    int i = s;
    int j = m + 1;
    int temp[100]; // bsed on the constraints

    int k = s;
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
            temp[k] = arr[j];
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
}
void mergesort(int arr[], int s, int e)
{

    // base case
    if (s == e)
    {
        // sort the arr[e....e] or arr[s.....s]
        return;
    }

    // recursive case
    // sort the arr[s....e] using the mergesort algorithm
    int m = s + (e - s) / 2;

    // recursively sort the arr[s.....m] and arr[m+1....e]

    mergesort(arr, s, m);
    mergesort(arr, m + 1, e);

    // mergesort the already two sorted subarrays

    merge(arr, s, m, e);
}

int main()
{
    int arr[] = {60, 50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}