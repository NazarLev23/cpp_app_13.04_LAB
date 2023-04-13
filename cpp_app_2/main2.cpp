#include <iostream>


using namespace std;

int main() {
    string str = "Hello world! 1111";
    int letters = 0, digits = 0, others = 0;
    for (char c : str) {
        if (isalpha(c)) {
            letters++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            others++;
        }
    }
    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Others: " << others << endl;
    return 0;
}
