#include <iostream>

using namespace std;

int makeOne[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, X;
    makeOne[0] = 0;
    makeOne[1] = 0;
    makeOne[2] = 1;
    makeOne[3] = 1;

    cin >> X;

    for (i = 4; i <= X; i++) {
        makeOne[i] = makeOne[i - 1] + 1;
        if (i % 2 == 0)
            makeOne[i] = min(makeOne[i], makeOne[i / 2] + 1);
        if (i % 3 == 0)
            makeOne[i] = min(makeOne[i], makeOne[i / 3] + 1);
    }

    cout << makeOne[X];

    return 0;
}