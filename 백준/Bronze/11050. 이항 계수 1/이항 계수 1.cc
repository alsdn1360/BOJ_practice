#include <iostream>

using namespace std;

int factorial(int n) {
    int i, result = 1;

    for (i = n; i >= 1; i--)
        result = result * i;

    return result;
}

int main() {
    int N, K;

    cin >> N >> K;
    cout << factorial(N) / (factorial(K) * factorial(N-K));

    return 0;
}