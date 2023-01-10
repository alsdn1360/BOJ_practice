#include <iostream>

using namespace std;

int main() {
    int A[100][100], i, k, j, N, x, y, total = 0, stack = 0;

    for (i = 0; i < 100; i++)
    {
        for (k = 0; k < 100; k++)
        {
            A[i][k] = 0;
        }
    }

    cin >> N;

    for (j = 0; j < N; j++)
    {
        cin >> x >> y;

        for (i = y; i < y + 10; i++)
        {
            for (k = x; k < x + 10; k++)
            {
                A[99 - i][k] += 1;
            }
        }
    }

    for (i = 0; i < 100; i++)
    {
        for (k = 0; k < 100; k++)
        {
            if (A[i][k] == 1)
                total += 1;
            else if (A[i][k] > 1)
                stack += 1;
        }
    }

    total += stack;

    cout << total;

    return 0;
}