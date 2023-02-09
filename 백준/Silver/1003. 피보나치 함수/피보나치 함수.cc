#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, i;
    int fibonacci[41] = {0, 1, 1};

    cin >> T;

    for (i = 3; i < 41; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    for (i = 0; i < T; i++) {
        cin >> N;

        if (N == 0)
            cout << "1 0\n";
        else if (N == 1)
            cout << "0 1\n";
        else {
            cout << fibonacci[N - 1] << ' ' << fibonacci[N] << '\n';
        }
    }

    return 0;
}