#include <iostream>
using namespace std;
void merge(int arr[], int s, int m, int e)
{

    int i = s;
    int j = m + 1;

    int temp[100];
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
void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s == e)
    {
        return;
    }

    // recursive case
    int m = s + (e - s) / 2;
    // recursively sort the arr[s....e]

    // recursively sort the arr[s.....m]
    mergeSort(arr, s, m);
    // recursively sort the arr[m+1......e]
    mergeSort(arr, m + 1, e);
    // merge the two sorted subarrays
    merge(arr, s, m, e);
}
int main()
{
    int arr[] = {50, 40, 30, 20, 10};
    // int n = sizeof(arr) / sizeof(int);
    int n = sizeof(arr) / sizeof(arr[0]); // this is a more accurate way to calculate the number of elements in an array

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}