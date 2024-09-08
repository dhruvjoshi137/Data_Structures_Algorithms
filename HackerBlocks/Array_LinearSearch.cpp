#include <iostream>
#include <vector>
using namespace std;

int findIndexOfNumber(int N, vector<int>& array, int M) {
    // Iterate through the vector to find the index of M
    for (int i = 0; i < N; ++i) {
        if (array[i] == M) {
            return i; // Return the index if M is found
        }
    }
    return -1; // Return -1 if M is not found
}

int main() {
    int N;
    cin >> N; // Size of the array

    vector<int> array(N);
    for (int i = 0; i < N; ++i) {
        cin >> array[i]; // Elements of the array
    }

    int M;
    cin >> M; // Number to find in the array

    // Calling the function to find the index of M in the array
    int result = findIndexOfNumber(N, array, M);

    // Printing the result
    cout << result << endl;

    return 0;
}
