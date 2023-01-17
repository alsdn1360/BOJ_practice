#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, K, i, temp;
    queue<int> josephus;

    cin >> N >> K;

    for (i = 1; i <= N; i++)
        josephus.push(i);

    cout << "<";

    while (josephus.size() != 1) {
        for (i = 0; i < K - 1; i++) {
            temp = josephus.front();
            josephus.pop();
            josephus.push(temp);
        }

        cout << josephus.front() << ", ";
        josephus.pop();
    }

    cout << josephus.front();
    cout << ">";

    return 0;
}