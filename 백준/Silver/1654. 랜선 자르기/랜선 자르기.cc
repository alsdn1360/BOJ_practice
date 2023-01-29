#include <iostream>

using namespace std;

int i, K, N, lan[10001], ans = 0;
int max_num = 0;
long long first, mid, last;

int main() {
    cin >> K >> N;

    for (i = 0; i < K; i++) {
        cin >> lan[i];
        if (lan[i] > max_num)
            max_num = lan[i];
    }

    first = 1;
    last = max_num;

    while (first <= last) {
        mid = (first + last) / 2;

        int num_lan = 0;

        for (i = 0; i < K; i++)
            num_lan += lan[i] / mid;

        if (num_lan >= N) {
            first = mid + 1;
            if (mid > ans)
                ans = mid;
        } else
            last = mid - 1;
    }

    cout << ans;

    return 0;
}