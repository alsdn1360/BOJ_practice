#include <iostream>
#include <algorithm>

using namespace std;

struct X_Y {
    int X, Y;
};

bool compare(X_Y xy1, X_Y xy2) {
    if (xy1.X == xy2.X)
        return xy1.Y < xy2.Y;
    else
        return xy1.X < xy2.X;
}

int main() {
    int i, N;

    cin >> N;

    X_Y xy[N];

    for (i = 0; i < N; i++)
        cin >> xy[i].X >> xy[i].Y ;

    sort(xy, xy + N, compare);

    for (i = 0; i < N; i++)
        cout << xy[i].X << ' ' << xy[i].Y << '\n';

    return 0;
}