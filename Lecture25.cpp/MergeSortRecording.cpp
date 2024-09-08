// Hum ek program bana rahe hai , mergesort ke upar , i mean kaise humara mergesort //jo hai wo kama karta hai

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
        // array has only one element left
        return;
    }

    // recursively sort the arr[s....e]
    // int m = (s+e)/2; //if starting point and ending point has a large number inside them , its  better to use s+(e-s)/2 , TLE - Time Limit exceed
    int m = s + (e - s) / 2;
    // recursively sort the arr[s....m]
    mergeSort(arr, s, m);
    // recursively sort the arr[m+1...e]
    mergeSort(arr, m + 1, e);

    // merge the two sorted subarrays
    merge(arr, s, m, e);
}
int main()
{
    int arr[] = {40, 10, 30, 20, 50};
    int n = sizeof(arr) / sizeof(int); // 1 integer- 4 bits , 5*4 = 20 bits , 20/4 = 5E.s
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}
