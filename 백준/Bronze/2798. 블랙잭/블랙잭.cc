#include <iostream>

using namespace std;

int main() {
    int i, k, j, card[100], N, M, result, sum, sub, subMin = 3000000;

    cin >> N >> M;

    for (i = 0; i < N; i++) {
        cin >> card[i];
    }

    for (i = 0; i < N - 2; i++) {
        for (k = i + 1; k < N - 1; k++) {
            for (j = k + 1; j < N; j++) {
                sum = card[i] + card[k] + card[j];
                if (sum > M)
                    continue;

                sub = M - sum;
                if (sub < subMin) {
                    subMin = sub;
                    result = sum;
                }
            }
        }
    }

    cout << result;
    return 0;
}