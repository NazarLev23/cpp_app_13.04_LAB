#include <iostream>
#include <string>

using namespace std;

bool Palindrome(string str) {
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (Palindrome(str)) {
        cout << "The string is palindrome." << endl;
    }
    else {
        cout << "The string is not palindrome." << endl;
    }

    return 0;
}