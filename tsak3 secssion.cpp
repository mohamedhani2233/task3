#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int vowelCount = 0;

    cout << "Enter a string: ";
    getline(cin, text);  

    for (char c : text) {
      char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
