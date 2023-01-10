#include <iostream>

using namespace std;

int main() {
    int A[1000], i, k, N, temp;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (i = 0; i < N - 1; i++)
    {
        for (k = 0; k < N - 1; k++)
        {
            if (A[k] > A[k+1])
            {
                temp = A[k+1];
                A[k+1] = A[k];
                A[k] = temp;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        cout << A[i] << '\n';
    }

    return 0;
}