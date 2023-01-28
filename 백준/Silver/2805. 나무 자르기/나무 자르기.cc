#include <iostream>

using namespace std;

int main() {
    int i, N, M;
    long long first = 0, mid, last = 1000000000, piece_tree, ans = 0;

    cin >> N >> M;

    long long tree[N];

    for (i = 0; i < N; i++)
        cin >> tree[i];

    while (first <= last) {
        mid = (first + last) / 2;
        piece_tree = 0;

        for (i = 0; i < N; i++) {
            if (tree[i] > mid)
                piece_tree += tree[i] - mid;
        }

        if (piece_tree == M) {
            ans = mid;
            break;
        } else if (piece_tree > M) {
            if (ans < mid)
                ans = mid;
            first = mid + 1;
        } else
            last = mid - 1;
    }

    cout << ans;

    return 0;
}