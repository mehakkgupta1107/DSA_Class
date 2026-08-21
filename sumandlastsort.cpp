#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[100], sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for(int i = n - 5; i < n; i++)
        sum = sum + a[i];

    cout << sum << endl;

    for(int i = n - 1; i >= n - 5; i--)
        cout << a[i] << " ";

    return 0;
}