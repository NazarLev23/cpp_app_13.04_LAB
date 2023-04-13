#include <iostream>
#include <string>

using namespace std;

int Words(string str) {
    int Count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        }
        else {
            if (!inWord) {
                inWord = true;
                Count++;
            }
        }
    }
    return Count;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int numWords = Words(sentence);
    cout << "Number of words: " << numWords << endl;
    return 0;
}