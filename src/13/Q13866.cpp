#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 4;
    int level[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> level[i];
    }

    sort(level, level + size);

    cout << abs(level[0] + level[3] - level[1] - level[2]);
}
