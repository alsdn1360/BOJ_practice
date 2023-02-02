#include <iostream>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ans = 0, N;

    cin >> N;

    ans = (N / 5) + (N / 25) + (N / 125);

    cout << ans;

    return 0;
}