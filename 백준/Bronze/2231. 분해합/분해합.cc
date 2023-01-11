#include <iostream>

using namespace std;

int main() {
    int i, j, N, num, comp;

    cin >> N;

    for (i = 1; i <= N; i++) {
        num = i;
        comp = 0;

        comp += num;

        for (j = 1000000; j > 0; j = j / 10) {
            comp += num / j;
            num = num % j;
        }

        if (comp == N) {
            cout << i;
            break;
        } else if (i == N)
            cout << "0";
    }
    return 0;
}