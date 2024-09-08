#include <iostream>
using namespace std;
void f(char out[], int n,  int i, int opencnt, int closecnt)
{

    // base case

    if (i == 2 * n)
    {
        // i have made decisions for 0 to 2n-1
        out[i] = '\0';
        cout << out << endl;
        return;
    }

    // recursive case

    if (opencnt < n)
    {
        out[i] = '(';
        f(out, n, i + 1, opencnt + 1, closecnt);
    }

    if (closecnt < opencnt)
    {
        out[i] = ')';
        f(out, n, i + 1, opencnt, closecnt + 1);
    }
}
int main()
{
    int n = 3;
    char out[100];
    f(out, n, 0, 0, 0);
}