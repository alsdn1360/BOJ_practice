#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main() {
    int i, N;

    cin >> N;

    string word[N];

    for (i = 0; i < N; i++)
        cin >> word[i];

    sort(word, word + N, compare);

    for (i = 0; i < N; i++) {
        if (word[i] == word[i + 1])
            continue;
        else
            cout << word[i] << '\n';
    }

    return 0;
}