#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string recipe;
int nb, ns, nc;
int pb, ps, pc;
long long r;

bool canCook(long long x) {
    long long needed_b = 0, needed_s = 0, needed_c = 0;
    for (char ch : recipe) {
        if (ch == 'B') needed_b += x;
        else if (ch == 'S') needed_s += x;
        else if (ch == 'C') needed_c += x;
    }
    
    long long total_cost = 0;
    if (needed_b > nb) total_cost += (needed_b - nb) * pb;
    if (needed_s > ns) total_cost += (needed_s - ns) * ps;
    if (needed_c > nc) total_cost += (needed_c - nc) * pc;
    
    return total_cost <= r;
}

int main() {
    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    
    // Binary search for the maximum number of hamburgers
    long long left = 0, right = 1e13, ans = 0;
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (canCook(mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
