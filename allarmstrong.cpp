#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int temp = num;
        int sum = 0;
        int digits = 0;
        int n = temp;
        while (n != 0) {
            digits++;
            n /= 10;
        }
        n = temp;
        while (n != 0) {
            int digit = n % 10;
            int power = 1;

            for (int i = 0; i < digits; i++) {
                power *= digit;
            }
            sum += power;
            n /= 10;
        }
        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}