
#include <iostream>
#include <cmath>
using namespace std;

bool jumping(int n)
{
    if (n < 10)
        return true;

    int last = n % 10;
    n = n / 10;

    while (n > 0)
    {
        int digit = n % 10;

        if (abs(digit - last) != 1)
            return false;

        last = digit;
        n = n / 10;
    }

    return true;
}

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i <= x; i++)
    {
        if (jumping(i))
            cout << i << " ";
    }

    return 0;
}

