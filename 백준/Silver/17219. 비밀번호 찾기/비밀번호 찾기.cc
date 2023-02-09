#include <iostream>
#include <map>

using namespace std;

map<string, string> notepad;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, N, M;
    string site, pw, target_site;

    cin >> N >> M;

    for (i = 0; i < N; i++) {
        cin >> site >> pw;
        notepad[site] = pw;
    }

    for (i = 0; i < M; i++) {
        cin >> target_site;
        cout << notepad[target_site] << '\n';
    }

    return 0;
}