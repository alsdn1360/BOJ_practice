#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int i, N, M;

    cin >> N;
    int A[N];
    for (i = 0; i < N; i++)
        cin >> A[i];
    sort(A, A + N);

    cin >> M;
    int targetNum[M];
    for (i = 0; i < M; i++)
        cin >> targetNum[i];

    for (i = 0; i < M; i++)
        cout << upper_bound(A, A + N, targetNum[i]) - lower_bound(A, A + N, targetNum[i])
        << ' ';

    return 0;
}