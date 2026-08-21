#include <iostream>
using namespace std;

int main() {
    string s;
    int k;

    cin >> s >> k;

    int n = s.length();

    for (int j = 0; j < k; j++) {
        char first = s[0];

        for (int i = 0; i < n - 1; i++) {
            s[i] = s[i + 1];
        }

        s[n - 1] = first;
    }

    cout << s;

    return 0;
}