#include <iostream>
#include <algorithm>

using namespace std;

int money[11];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, i, cnt = 0;

    cin >> N >> K;

    for (i = 0; i < N; i++)
        cin >> money[i];

    sort(money, money + N, greater<>());

    for (i = 0; i < N; i++) {
        if (K == 0)
            break;

        while (1) {
            if (K - money[i] >= 0) {
                K -= money[i];
                cnt++;
            } else
                break;
        }
    }

    cout << cnt;

    return 0;
}