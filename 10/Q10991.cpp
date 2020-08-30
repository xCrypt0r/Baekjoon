#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N - 1; ++j)
        {
            cout << " ";
        }

        for (int j = 1; j <= i * 2 - 1; ++j)
        {
            cout << (j & 1 ? "*" : " ");
        }

        cout << "\n";
    }
}
