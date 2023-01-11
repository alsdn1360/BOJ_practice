#include <iostream>

using namespace std;

int main() {
    int i, num, ans = 0;

    for (i = 0; i < 5; i++)
    {
        cin >> num;
        ans += num * num;
    }

    cout << ans % 10;
    
    return 0;
}