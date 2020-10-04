#include <iostream>

using namespace std;

int main()
{
    int X, count = 0;

    cin >> X;

    for (; X != 0; X >>= 1)
    {
        if (X & 1)
        {
            count++;
        }
    }

    cout << count;
}
