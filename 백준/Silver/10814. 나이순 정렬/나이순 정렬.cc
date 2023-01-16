#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int age;
    int order = 0;
};

bool compare(const Person& A, const Person& B) {
    if (A.age == B.age)
        return A.order < B.order;
    else
        return A.age < B.age;
}

int main() {
    int i, N;

    cin >> N;

    Person person[N];

    for (i = 0; i < N; i++) {
        cin >> person[i].age >> person[i].name;
        person[i].order = i;
    }

    sort(person, person + N, compare);

    for (i = 0; i < N; i++)
        cout << person[i].age << ' ' << person[i].name << '\n';

    return 0;
}