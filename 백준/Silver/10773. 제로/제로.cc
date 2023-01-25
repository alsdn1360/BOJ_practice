#include <iostream>
#include <stack>

using namespace std;

int main() {
    int K, i, input, ans = 0;
    stack<int> Stack;

    cin >> K;

    for (i = 0; i < K; i++) {
        cin >> input;

        if (input != 0)
            Stack.push(input);
        else if (input == 0)
            Stack.pop();
    }

    while (!Stack.empty()) {
        ans += Stack.top();
        Stack.pop();
    }

    cout << ans;

    return 0;
}