#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
string reverseString(const string &str) {
    string reversedStr = str; // Make a copy of the original string
    int n = reversedStr.length();

    for (int i = 0; i < n / 2; ++i) {
        swap(reversedStr[i], reversedStr[n - i - 1]);
    }
    return reversedStr;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
