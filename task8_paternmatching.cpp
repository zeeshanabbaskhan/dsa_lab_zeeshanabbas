#include <iostream>
#include <string>
using namespace std;

int naivePatternMatch(const string& text, const string& pattern) {
    if (pattern.empty()) return 0; // If pattern is empty, return 0

    int n = text.size();
    int m = pattern.size();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) break;
        }
        if (j == m) return i; // Pattern found
    }
    return -1; // Pattern not found
}

int main() {
    string text = "hello world";
    
    cout << "Pattern at beginning: " << naivePatternMatch(text, "hello") << endl;
    cout << "Pattern at end: " << naivePatternMatch(text, "world") << endl;
    cout << "Pattern not present: " << naivePatternMatch(text, "abc") << endl;
    cout << "Empty pattern: " << naivePatternMatch(text, "") << endl;

    return 0;
}
