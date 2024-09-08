#include <iostream>
using namespace std;

void printHollowDiamond(int size) {
    // Upper part
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j)
            cout << " ";
        cout << "*";
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; ++j)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    // Lower part (mirror of upper part)
    for (int i = size - 2; i >= 0; --i) {
        for (int j = 0; j < size - i - 1; ++j)
            cout << " ";
        cout << "*";
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; ++j)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int patternSize = 5; // Adjust this for different sizes
    printHollowDiamond(patternSize);
    return 0;
}
