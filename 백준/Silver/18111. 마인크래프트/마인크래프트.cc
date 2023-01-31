#include <iostream>

using namespace std;

int block[501][501];

int main() {
    int N, M, B, i, k, j;
    int max_height = 0, min_height = 257, max_time = 2147000000, height;

    cin >> N >> M >> B;

    for (i = 0; i < N; i++) {
        for (k = 0; k < M; k++) {
            cin >> block[i][k];
            max_height = max(max_height, block[i][k]);
            min_height = min(min_height, block[i][k]);
        }
    }

    for (i = min_height; i <= max_height; i++) {
        int sum = 0, inventory = B;

        for (k = 0; k < N; k++) {
            for (j = 0; j < M; j++) {
                if (block[k][j] < i) {
                    sum += i - block[k][j];
                    inventory -= i - block[k][j];
                } else if (block[k][j] > i) {
                    sum += (block[k][j] - i) * 2;
                    inventory += block[k][j] - i;
                } else
                    continue;
            }
        }

        if (inventory >= 0) {
            if (sum <= max_time) {
                max_time = sum;
                height = i;
            }
        }
    }

    cout << max_time << ' ' << height;

    return 0;
}