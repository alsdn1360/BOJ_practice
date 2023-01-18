#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, N, X;
    stack<int> Stack;
    string order;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> order;

        if (order == "push") {
            cin >> X;
            Stack.push(X);
        } else if (order == "pop") {
            if (Stack.empty())
                cout << "-1\n";
            else {
                cout << Stack.top() << '\n';
                Stack.pop();
            }
        } else if (order == "size") {
            cout << Stack.size() << '\n';
        } else if (order == "empty") {
            if (Stack.empty())
                cout << "1\n";
            else
                cout << "0\n";
        } else if (order == "top") {
            if (Stack.empty())
                cout << "-1\n";
            else
                cout << Stack.top() << '\n';
        }
    }

    return 0;
}