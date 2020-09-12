#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 6;
    char result[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> result[i];
    }

    int wins = count(result, result + size, 'W');

    cout << (wins >= 5 ? 1 : wins >= 3 ? 2 : wins >= 1 ? 3 : -1);
}
