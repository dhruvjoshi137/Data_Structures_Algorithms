#include<iostream>

using namespace std;

int f(int X[], int n, int t, int i) {

	// base case

	if (i == n) {

		// find the idx of the 1st occ. of the 't' in X[n...n-1] = {}

		return -1;

	}

	// if (i == n - 1) {

	// 	// find the idx of the 1st occ. of the 't' in X[n-1...n-1] = {X[n-1]}

	// 	return X[n - 1] == t ? n - 1 : -1;

	// }

	// recursive case

	// find the idx of the 1st occ. of the 't' in X[i...n-1]

	if (X[i] == t) {
		return i;
	}

	// ask your friend find the idx of the 1st occ. of the 't' in X[i+1...n-1]

	return f(X, n, t, i + 1);

}

int main() {

	int X[] = {10, 20, 30, 10, 20};
	int n = sizeof(X) / sizeof(int);
	int t = 40;

	cout << f(X, n, t, 0) << endl;

	return 0;
}