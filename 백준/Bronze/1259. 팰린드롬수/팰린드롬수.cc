#include <iostream>

using namespace std;

int main() {
    string num;
    int i, cnt;

    while (num != "0")
    {
        bool flag = true;

        cin >> num;
        
        if (num[0] == '0')
            break;

        cnt = num.length();

        for (i = 0; i < cnt / 2; i++)
            if (num[i] != num[cnt - 1 - i]) {
                cout << "no\n";
                flag = false;
                break;
            }

        if (i == cnt / 2 && flag == true)
            cout << "yes\n";
    }

    return 0;
}