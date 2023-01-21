#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string hash;
    int i, L, r = 31, M = 1234567891, result = 0;

    cin >> L >> hash;


    for (i = 0; i < L; i++) {
        result += (hash[i] - 96) * pow(r, i);
        result = result % M;
    }

    cout << result;

    return 0;
}