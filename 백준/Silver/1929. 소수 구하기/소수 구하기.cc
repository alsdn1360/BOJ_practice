#include <iostream>

using namespace std;

int main() {
    int i, k, M, N;
    bool prime[1000001];

    cin >> M >> N;

    for (i = 2; i <= N; i++)
    {
        prime[i] = true;
    }

    for (i = 2; i <= N; i++)
    {
        if(prime[i])
        {
            for (k = i * 2; k <= N; k += i)
            {
                prime[k] = false;
            }
        }
    }

    for (i = M; i <= N; i++)
    {
        if(prime[i])
        {
            cout << i << '\n';
        }
    }

    return 0;
}