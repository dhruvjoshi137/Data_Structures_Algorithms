#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int peakindexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        int m1 = s + (e - s) / 3;
        int m2 = e - (e - s) / 3;

        if (arr[m1] > arr[m2])
        {
            // reduce the search space from [s,e] to [s,m2-1]
            e = m2 - 1;
        }
        else
        {
            // arr[m1]<arr[m2]
            s = m1 + 1;
        }
    }
    cout << s << " " << arr[s] << " " << e << " " << arr[e] << endl;
    return s;
}
int main()
{

    vector<int> arr = {0, 1, 3, 10, 3, 1, 0};
    cout << peakindexInMountainArray(arr) << endl;

    return 0;
}