#include <iostream>
#include <queue>

using namespace std;

int main() {
    int T, N, M, i, k, input;

    cin >> T;

    for (i = 0; i < T; i++) {
        int cnt = 0;

        queue<int> printer;
        queue<bool> target;
        priority_queue<int> priority;

        cin >> N >> M;

        for (k = 0; k < N; k++) {
            cin >> input;

            printer.push(input);
            priority.push(input);

            if (k == M)
                target.push(true);
            else
                target.push(false);
        }

        while (1) {
            if (printer.front() != priority.top()) {
                printer.push(printer.front());
                printer.pop();
                target.push(target.front());
                target.pop();
            } else {
                cnt++;
                printer.pop();
                priority.pop();

                if (target.front() == true)
                    break;
                else
                    target.pop();
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}