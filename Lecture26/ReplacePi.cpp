#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void f(char inp[], int i)
{

    // base case
    if (inp[i] == '\0')
    {
        return;
    }
    // recursive case
    // replace pis with 3.14 in suffix of inp[] that starts at ith index
    // shift  all the characters starting at the (i+2)th index 2-steps  to the right

    int j = i + 2;
    while (inp[j] != '\0')
    {
        j++;
    }
    while (j >= i + 2)
    {
        inp[j + 2] = inp[j];
        j--;
    }

    if (inp[i] == 'p' and inp[i + 1] == 'i')
    {

        inp[i] = '3';
        inp[i + 1] = '.';
        inp[i + 2] = '1';
        inp[i + 3] = '4';
        f(inp, i + 4);
    }
    else
    {
        f(inp, i + 1);
    }
}
int main()
{
    char inp[20] = "pippi";
    f(inp, 0);
    cout << inp << endl;
    return 0;
}