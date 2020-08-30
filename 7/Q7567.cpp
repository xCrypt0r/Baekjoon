#include <iostream>

using namespace std;

int main()
{
    string bowls;
    int height = 10;

    cin >> bowls;

    for (int i = 1; i < bowls.length(); ++i)
    {
        height += (bowls[i] == bowls[i - 1] ? 5 : 10);
    }

    cout << height;
}
