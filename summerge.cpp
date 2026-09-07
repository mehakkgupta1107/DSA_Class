#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100], b[100], c[200];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int i = 0, j = 0, k = 0;

    while (i < n && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    cout << c[n - 1] + c[n];

    return 0;
}