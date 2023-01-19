#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, i, tmp;
    queue<int> QUEUE;
    cin >> N;

    for (i = 1; i <= N; i++)
        QUEUE.push(i);

    while (QUEUE.size() != 1) {
        QUEUE.pop();
        tmp = QUEUE.front();
        QUEUE.pop();
        QUEUE.push(tmp);
    }

    cout << QUEUE.front();

    return 0;
}