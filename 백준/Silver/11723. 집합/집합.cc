#include <iostream>
#include <set>

using namespace std;

set<int> S;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, i, k, x;
    string input;

    cin >> M;

    for (i = 0; i < M; i++) {
        cin >> input;

        if (input == "add") {
            cin >> x;
            if (S.count(x) == 0)
                S.insert(x);
            else
                continue;
        } else if (input == "remove") {
            cin >> x;
            if (S.count(x) == 1)
                S.erase(x);
            else
                continue;
        } else if (input == "check") {
            cin >> x;
            cout << S.count(x) << '\n';
        } else if (input == "toggle") {
            cin >> x;
            if (S.count(x) == 1)
                S.erase(x);
            else
                S.insert(x);
        } else if (input == "all") {
            for (k = 1; k <= 20; k++)
                S.insert(k);
        } else if (input == "empty") {
            S.clear();
        }
    }

    return 0;
}