#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    string s1, s2;
    cin >> s1 >> s2;

    k = k % s1.length();

    string r1 = s1.substr(s1.length() - k) + s1.substr(0, s1.length() - k);
    string r2 = s2.substr(k) + s2.substr(0, k);

    string s3 = r1 + r2;

    string rev = "";

    for (int i = s3.length() - 1; i >= 0; i--) {
        rev += s3[i];
    }

    if (s3 == rev)
        cout << s3 << " True";
    else
        cout << s3 << " False";

    return 0;
}