#include <iostream>
#include <map>

using namespace std;

map<string, int> pokemon;
string pokemon_name[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N, i;
    string name, input;

    cin >> N >> M;

    for (i = 1; i <= N; i++) {
        cin >> name;
        pokemon.insert({name, i});
        pokemon_name[i] = name;
    }

    for (i = 0; i < M; i++) {
        cin >> input;

        if (isdigit(input[0]) == true)
            cout << pokemon_name[stoi(input)] << '\n';
        else
            cout << pokemon.find(input)->second << '\n';
    }

    return 0;
}