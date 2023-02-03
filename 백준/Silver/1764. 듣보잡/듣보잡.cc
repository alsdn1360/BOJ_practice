#include <iostream>
#include <set>

using namespace std;

set<string> noHear;
set<string> noHearSee;
set<string>::iterator pos;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, i;
    string name, input;

    cin >> N >> M;

    for (i = 0; i < N; i++) {
        cin >> name;
        noHear.insert(name);
    }

    for (i = 0; i < M; i++) {
        cin >> input;
        
        pos = noHear.find(input);
        if (pos != noHear.end())
            noHearSee.insert(*pos);
    }

    cout << noHearSee.size() << '\n';

    for (pos = noHearSee.begin(); pos != noHearSee.end(); pos++)
        cout << *pos << '\n';

    return 0;
}