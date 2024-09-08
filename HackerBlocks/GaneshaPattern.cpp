#include <iostream>
using namespace std;

void printGaneshaPattern(int N) {
    int half = N / 2;

    // Top half including the middle line
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            // First line
            cout << "*";
            for (int j = 1; j <= half - 1; j++) cout << " ";
            cout << "*";
            for (int j = 0; j < half; j++) cout << "*";
            cout << endl;
        } else if (i < half) {
            // Upper part excluding the first and middle lines
            cout << "*";
            for (int j = 1; j <= half - 1; j++) cout << " ";
            cout << "*" << endl;
        } else if (i == half) {
            // Middle line
            for (int j = 0; j < N; j++) cout << "*";
            cout << endl;
        } else if (i < N - 1) {
            // Lower part excluding the middle and last lines
            for (int j = 0; j < half; j++) cout << " ";
            cout << "*";
            for (int j = 1; j <= half - 1; j++) cout << " ";
            cout << "*" << endl;
        } else {
            // Last line
            for (int j = 0; j < half; j++) cout << "*";
            cout << "";
            cout << "*";
            for (int j = 1; j <= half - 1; j++) cout << " ";
            cout << "*" << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;

    if (N >= 5 && N % 2 == 1) {
        printGaneshaPattern(N);
    } else {
        cout << "Invalid input. Please enter an odd number greater than or equal to 5." << endl;
    }

    return 0;
}
