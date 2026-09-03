#include <bits/stdc++.h>
using namespace std;

bool jumping(int n) {
    if (n < 10) return true;

    int prev = n % 10;
    n /= 10;

    while (n > 0) {
        int cur = n % 10;
        if (abs(cur - prev) != 1)
            return false;
        prev = cur;
        n /= 10;
    }
    return true;
}

int main() {
    int x;
    cin >> x;

    for (int i = 0; i <= x; i++) {
        if (jumping(i))
            cout << i << " ";
    }

    return 0;
}