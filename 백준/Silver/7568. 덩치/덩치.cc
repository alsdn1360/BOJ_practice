#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
    int weight;
    int height;
};

int main() {
    int N, i, k, j;

    cin >> N;

    Person person[N];

    for (i = 0; i < N; i++)
        cin >> person[i].weight >> person[i].height;

    for (i = 0; i < N; i++) {
        k = 0;
        for (j = 0; j < N; j++) {
            if (person[i].weight < person[j].weight && person[i].height < person[j].height)
                k++;
        }

        cout << k + 1 << ' ';
    }

    return 0;
}