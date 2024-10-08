#include <iostream>
#include <iomanip>
using namespace std;

int f(int x)
{
    return -x * x + 100 * x; //-x^2+100x is an unimodal function
}
double findPeakIterative(double s, double e)
{
    int it = 0;

    while (e - s >= 1e-6)
    { // 1e-6 = 10^-6
        it++;
        double m1 = s + (e - s) / 3;
        double m2 = e - (e - s) / 3;

        // cout<<s<<" "<<e<<endl;
        if (f(m1) > f(m2))
        {

            // reduce the search space from [s,e] to [s,m2]
            e = m2;
        }
        else
        {

            s = m1;
        }
        if (it == 1000)
        {
            break;
        }
    }
    return f((e + s) / 2);
}

double findPeakRecursive(double s, double e)
{
    // base case

    if (e - s <= 1e-6)
    {
        return f((s + e) / 2);
    }

    // recursive case
    // find the peak of f() in [s,e]
    double m1 = s + (e - s) / 3;
    double m2 = e - (e - s) / 3;

    if (f(m1) > f(m2))
    {
        // reduce the search space from [s,e] to [s,m2]
        // and recursively search for the peak in this new search space
        return findPeakRecursive(s, m2);
    }

    // f(m1)<f(m2)
    // reduce the search space from [s,e] to [m1,e]
    // and recursively search for the peak in this new search space

    return findPeakRecursive(m1, e);
}
c

    int
    main()
{
    double e = 100;
    double s = 0;
    // cout<<setprecision(20)<<fixed;
    cout << findPeakIterative(s, e) << endl;
    cout << findPeakRecursive(s, e) << endl;
    return 0;
}