#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    char S1[1000], S2[1000];

    cin.get();

    for (int i = 0; i < N; i++) {
        S1[i] = cin.get();
    }

    cin.get();

    for (int i = 0; i < M; i++) {
        S2[i] = cin.get();
    }

    for (int i = 0; i < N; i++) {
        int count = 0;

        for (int j = 0; j < M; j++) {
            if (S1[i] == S2[j]) {
                count++;
            }
        }

        cout << count << " ";
    }

    return 0;
}