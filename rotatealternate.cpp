#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for (int i = 0; i < n; i = i + k) {
        if ((i / k) % 2 == 0) {
            cout << s[i] << s[i + 1];
        } else {
            cout << s[i + 1] << s[i];
        }
    }

    return 0;
}