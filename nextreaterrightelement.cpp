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

    for(int i = 0; i < n; i++) {

        ans[i] = 0;

        for(int j = i + 1; j < n; j++) {

            if(a[j] > a[i]) {
                ans[i] = a[j];
                break;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}