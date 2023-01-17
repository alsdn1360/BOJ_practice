#include <iostream>
#include <deque>

using namespace std;

int main() {
    int i, N, X;
    deque<int> Deque;
    string order;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> order;

        if (order == "push_front") {
            cin >> X;
            Deque.push_front(X);
        } else if (order == "push_back") {
            cin >> X;
            Deque.push_back(X);
        } else if (order == "pop_front") {
            if (Deque.empty())
                cout << "-1\n";
            else {
                cout << Deque.front() << '\n';
                Deque.pop_front();
            }
        } else if (order == "pop_back") {
            if (Deque.empty())
                cout << "-1\n";
            else {
                cout << Deque.back() << '\n';
                Deque.pop_back();
            }
        } else if (order == "size") {
            cout << Deque.size() << '\n';
        } else if (order == "empty") {
            if (Deque.empty())
                cout << "1\n";
            else
                cout << "0\n";
        } else if (order == "front") {
            if (Deque.empty())
                cout << "-1\n";
            else {
                cout << Deque.front() << '\n';
            }
        } else if (order == "back") {
            if (Deque.empty())
                cout << "-1\n";
            else {
                cout << Deque.back() << '\n';
            }
        }
    }

    return 0;
}