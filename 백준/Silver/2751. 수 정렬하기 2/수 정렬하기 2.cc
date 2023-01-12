#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int i, N;

    cin >> N;

    int NUM[N];

    for (i = 0; i < N; i++) {
        cin >> NUM[i];
    }

    sort(NUM, NUM + N);

    for (i = 0; i < N; i++) {
        cout << NUM[i] << '\n';
    }
    return 0;
}