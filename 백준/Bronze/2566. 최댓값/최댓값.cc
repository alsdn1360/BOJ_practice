#include <iostream>

using namespace std;

int main() {
    int i, k, row = 0, column = 0, A[9][9], max = 0;

    for (i = 0; i < 9; i++)
    {
        for (k = 0; k < 9; k++)
        {
            cin >> A[i][k];
        }
    }

    for (i = 0; i < 9; i++)
    {
        for (k = 0; k < 9; k++)
        {
            if (max <= A[i][k])
            {
                max = A[i][k];
                row = i + 1;
                column = k + 1;
            }
        }
    }

    cout << max << '\n' << row << ' ' << column;

    return 0;
}