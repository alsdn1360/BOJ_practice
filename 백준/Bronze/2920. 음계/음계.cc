#include <iostream>

using namespace std;

int main() {
    int i, pitch[8];

    for (i = 0; i < 8; i++) {
        cin >> pitch[i];
    }

    if (pitch[0] == 1) {
        for (i = 1; i < 7; i++) {
            if (pitch[i] != i + 1)
                break;
        }

        if (i == 7)
            cout << "ascending";
        else
            cout << "mixed";
    } else if (pitch[0] == 8) {
        for (i = 1; i < 7; i++) {
            if (pitch[i] != 8 - i)
                break;
        }

        if (i == 7)
            cout << "descending";
        else
            cout << "mixed";
    } else
        cout << "mixed";

    return 0;
}