#include <iostream>
#include <algorithm>

using namespace std;

int P[1001];

int main() {
    int i, N, time = 0, sum = 0;

    cin >> N;

    for (i = 0; i < N; i++)
        cin >> P[i];

    sort(P, P + N);

    for (i = 0; i < N; i++) {
        sum += P[i];
        time += sum;
    }

    cout << time;

    return 0;
}