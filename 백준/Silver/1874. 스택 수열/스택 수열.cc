#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int N, i, cnt = 0;
    stack<int> Stack;
    queue<char> ans;

    cin >> N;

    int input[N];

    for (i = 0; i < N; i++)
        cin >> input[i];

    for (i = 1; i <= N; i++) {
        Stack.push(i);
        ans.push('+');

        while (!Stack.empty() && Stack.top() == input[cnt]) {
            Stack.pop();
            ans.push('-');
            cnt++;
        }
    }

    if (Stack.empty())
        while (!ans.empty()) {
            cout << ans.front() << '\n';
            ans.pop();
        }
    else
        cout << "NO";

    return 0;
}