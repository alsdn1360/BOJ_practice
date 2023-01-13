#include <iostream>

using namespace std;

int GCD(int n, int m) {
    if (m == 0)
        return n;
    return GCD(m, n % m);
}

int LCM(int m, int n) {
    return (m * n) / GCD(m,n);
}
int main() {
    int N, M;

    cin >> N >> M;

    cout << GCD(N, M) << '\n' << LCM(N, M);

    return 0;
}