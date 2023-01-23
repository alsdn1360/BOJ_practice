#include <iostream>

using namespace std;

int main() {
    int i, N, cnt, result, doom = 665;

    cin >> N;

    while (cnt != N) {
        doom++;
        result = doom;

        while (result != 0) {
            if (result % 1000 == 666) {
                cnt++;
                break;
            }
            else
                result /= 10;
        }
    }

    cout << doom;

    return 0;
}