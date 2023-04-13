#include <iostream>

using namespace std;

int main() {
    string str = " Hello world !";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str[i] = '\t';
        }
    }
    cout << str << endl;
    return 0;
}