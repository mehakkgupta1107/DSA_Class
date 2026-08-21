#include <iostream>
using namespace std;

int main() {
    int n, k;
    string s;

    cin >> n >> k;
    cin >> s;

    k = k % n;

    for (int j = 0; j < k; j++) {
        char last = s[n - 1];

        for (int i = n - 1; i > 0; i--) {
            s[i] = s[i - 1];
        }

        s[0] = last;
    }

    cout << s;

    return 0;
}