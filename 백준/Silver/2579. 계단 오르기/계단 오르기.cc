#include <iostream>

using namespace std;

int stair[301];
int score[301];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, i;

    cin >> N;

    for (i = 1; i <= N; i++)
        cin >> stair[i];

    score[1] = stair[1];
    score[2] = stair[1] + stair[2];
    score[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

    for (i = 4; i <= N; i++)
        score[i] = max(score[i - 2] + stair[i], score[i - 3] + stair[i - 1] + stair[i]);

    cout << score[N];

    return 0;
}