#include <iostream>

using namespace std;

int main() {
    int i, n, v, num[100], cnt = 0;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cin >> v;
    for (i = 0; i < n; i++)
    {
        if (num[i] == v)
            cnt += 1;
    }

    cout << cnt;
    return 0;
}