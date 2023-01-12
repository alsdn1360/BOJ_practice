#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i, k, N, num, count[10001] = {0};

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> num;
        count[num]++;
    }

    for (i = 0; i < 10001; i++)
        if (count[i] != 0)
            for (k = 0; k < count[i]; k++)
                cout << i << '\n';

    return 0;
}