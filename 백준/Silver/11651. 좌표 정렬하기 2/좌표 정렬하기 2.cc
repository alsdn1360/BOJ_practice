#include <iostream>
#include <algorithm>

using namespace std;

struct X_Y {
    int x;
    int y;
};

int compare(X_Y xy1, X_Y xy2) {
    if (xy1.y == xy2.y)
        return xy1.x < xy2.x;

    return xy1.y < xy2.y;
}

int main() {
    int N, i;

    cin >> N;

    X_Y xy[N];

    for (i = 0; i < N; i++)
        cin >> xy[i].x >> xy[i].y;

    sort(xy, xy + N, compare);

    for (i = 0; i < N; i++)
        cout << xy[i].x << ' ' << xy[i].y << '\n';

    return 0;
}