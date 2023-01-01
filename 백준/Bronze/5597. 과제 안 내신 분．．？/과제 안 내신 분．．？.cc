#include <iostream>

using namespace std;

int main() {
    int stu[31], i, x;
    
    for (i = 0; i < 30; i++)
    {
        stu[i] = (i + 1);
    }
    
    for (i = 0; i < 28; i++)
    {
        cin >> x;
        stu[x - 1] = 0;
    }
    
    for (i = 0; i < 30; i++)
    {
        if (stu[i] != 0)
            cout << stu[i] << '\n';
    }
    
    return 0;
}