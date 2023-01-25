#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int i;

    while (1) {
        string input;
        stack<char> Stack;
        int flag = 0;

        getline(cin, input);
        if (input[0] == '.')
            break;

        for (i = 0; i < 100; i++) {
            if (input[i] == '(' || input[i] == '[') {
                Stack.push(input[i]);
            } else if (input[i] == ')') {
                if (Stack.empty() || Stack.top() != '(') {
                    flag = 1;
                    break;
                } else
                    Stack.pop();
            } else if (input[i] == ']') {
                if (Stack.empty() || Stack.top() != '[') {
                    flag = 1;
                    break;
                } else
                    Stack.pop();
            }

            if (input[i] == '.')
                break;
        }

        if (!Stack.empty() || flag == 1)
            cout << "no\n";
        else
            cout << "yes\n";
    }
    return 0;
}