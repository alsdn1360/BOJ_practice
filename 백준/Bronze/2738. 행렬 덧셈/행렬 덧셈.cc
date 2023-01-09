#include <iostream>

using namespace std;

int main() {
    int i, k, N, M, A[100][100], B[100][100], C[100][100];

    cin >> N >> M;

    for (i = 0; i < N; i++)
    {
        for (k = 0; k < M; k++)
        {
            cin >> A[i][k];
        }
    }

    for (i = 0; i < N; i++)
    {
        for (k = 0; k < M; k++)
        {
            cin >> B[i][k];
        }
    }

    for (i = 0; i < N; i++)
    {
        for (k = 0; k < M; k++)
        {
            cout << A[i][k] + B[i][k] << ' ';
        }
        cout << '\n';
    }
    return 0;
}