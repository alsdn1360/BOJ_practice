#include <iostream>

using namespace std;

int main()
{
    int i, x, n, price, cnt, total = 0;

    cin >> x;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> price >> cnt;
        total += price * cnt;
    }

    if (total == x)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}