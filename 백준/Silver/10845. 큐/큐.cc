#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int i, N, X;
    queue<int> Queue;
    string order;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> order;

        if (order == "push") {
            cin >> X;
            Queue.push(X);
        } else if (order == "pop") {
            if (Queue.empty())
                cout << "-1\n";
            else {
                cout << Queue.front() << '\n';
                Queue.pop();
            }
        } else if (order == "size") {
            cout << Queue.size() << '\n';
        } else if (order == "empty") {
            if (Queue.empty())
                cout << "1\n";
            else
                cout << "0\n";
        } else if (order == "front") {
            if (Queue.empty())
                cout << "-1\n";
            else
                cout << Queue.front() << '\n';
        } else if (order == "back") {
            if (Queue.empty())
                cout << "-1\n";
            else
                cout << Queue.back() << '\n';
        }
    }

    return 0;
}