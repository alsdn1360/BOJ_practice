#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, k, x, i;

    cin >> N >> k;

    int score[N];

    for (i = 0; i < N; i++)
        cin >> score[i];

    sort(score, score + N, greater<>());

    cout << score[k - 1];

    return 0;
}