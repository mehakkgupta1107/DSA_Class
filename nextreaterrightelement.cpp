#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int ans[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++) {
        if(a[i] < a[i + 1])
            ans[i] = a[i + 1];
        else
            ans[i] = 0;
    }

    ans[n - 1] = 0;

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}