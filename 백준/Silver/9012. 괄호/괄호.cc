#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N, i, k;
    string input;

    cin >> N;

    for (i = 0; i < N; i++) {
        stack<char> VPS;
        int flag = 0;

        cin >> input;

        for (k = 0; k < input.size(); k++) {
            if (input[k] == '(')
                VPS.push(input[k]);
            else if (input[k] == ')') {
                if (VPS.empty()) {
                    flag = 1;
                    break;
                } else
                    VPS.pop();
            }
        }

        if (!VPS.empty() || flag == 1)
            cout << "NO\n";
        else
            cout <<"YES\n";
    }

    return 0;
}