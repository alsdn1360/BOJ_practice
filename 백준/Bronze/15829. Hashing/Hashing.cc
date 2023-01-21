#include <iostream>

using namespace std;

int main() {
    string hash;
    int i, L;
    long long r = 1, M = 1234567891, result = 0;

    cin >> L >> hash;

    for (i = 0; i < L; i++) {
        result += (((hash[i] - 96) * (r % M)) % M) % M;

        r = r * 31;
    }

    cout << result;

    return 0;
}