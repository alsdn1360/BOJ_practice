#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int i, N, M, first, mid, last;
    bool flag;

    cin >> N;
    int A[N];
    for (i = 0; i < N; i++)
        cin >> A[i];
    sort(A, A + N);

    cin >> M;
    int targetNum[M];
    for (i = 0; i < M; i++)
        cin >> targetNum[i];

    for (int i = 0; i < M; i++) {
        first = 0;
        last = N - 1;
        flag = false;

        while (first <= last) {
            mid = (first + last) / 2;

            if (targetNum[i] == A[mid]) {
                cout << "1\n";
                flag = true;
                break;
            } else if (targetNum[i] < A[mid])
                last = mid - 1;
            else if (targetNum[i] > A[mid])
                first = mid + 1;
        }

        if (!flag)
            cout << "0\n";
    }

    return 0;
}