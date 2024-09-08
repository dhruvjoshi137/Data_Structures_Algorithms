#include<iostream>

using namespace std;

int stringToInteger(string str, int n) {
    //basecase
    if (n == 0) {

        return 0;
    }
    //recursive case
    string subString = str.substr(0, n - 1);
    int IntegerFromMyFriend = stringToInteger(subString, n - 1);
    return IntegerFromMyFriend * 10 + (str[n - 1] - '0');
}

int main() {
    string str = "977373371";
    int n = str.size();
    cout << stringToInteger(str, n) << endl;

}