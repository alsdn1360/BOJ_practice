#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, i, sum = 0, most_frequent[8001] = {0}, max_cnt = 0, frequent = 0;
    cin >> N;

    int num[N];

    for (i = 0; i < N; i++) {
        cin >> num[i];
        sum += num[i];
        most_frequent[num[i] + 4000] += 1;
    }

    sort(num, num + N);

    for (i = 0; i < 8001; i++) {
        if (most_frequent[i] > max_cnt) {
            max_cnt = most_frequent[i];
            frequent = i;
        }
    }

    for (i = frequent + 1; i < 8001; i++) {
        if (most_frequent[i] == max_cnt) {
            frequent = i;
            break;
        }
    }
    
    sum = round((double)sum / N);
    if (sum == -0)
        sum = 0;


    cout << sum << '\n' << num[(N - 1) / 2] << '\n' << frequent - 4000 << '\n' << num[N - 1] - num[0];

    return 0;
}