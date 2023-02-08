#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int i, num[5], sum = 0;

    for (i = 0; i < 5; i++) {
        cin >> num[i];
        sum += num[i];
    }

    sort(num, num + 5);

    cout << sum / 5 << '\n' << num[2];

    return 0;
}