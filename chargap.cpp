#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        int gap = -1;

        // Find the next occurrence of s[i]
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                gap = j - i - 1;
                break;
            }
        }

        cout << gap << " ";
    }

    return 0;
}