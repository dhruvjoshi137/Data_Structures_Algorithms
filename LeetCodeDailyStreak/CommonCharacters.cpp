#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string findCommonCharacters(const string &str1, const string &str2) {
    // Sort both strings
    string sortedStr1 = str1;
    string sortedStr2 = str2;
    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());

    // Use two pointers to find common characters
    string result = "";
    int i = 0, j = 0;
    while (i < sortedStr1.size() && j < sortedStr2.size()) {
        if (sortedStr1[i] == sortedStr2[j]) {
            result += sortedStr1[i];
            i++;
            j++;
        } else if (sortedStr1[i] < sortedStr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}