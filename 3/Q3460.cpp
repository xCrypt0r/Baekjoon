#include <iostream>

using namespace std;

int main()
{
    int T, N;

    cin >> T;

    while (T--)
    {
        cin >> N;

        for (int i = 0; i < 30; ++i)
        {
            if (N & (1 << i))
            {
                cout << i << ' ';
            }
        }
    }
}
