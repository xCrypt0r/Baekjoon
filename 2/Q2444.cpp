#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cout << string(N - i, ' ') << string(i * 2 - 1, '*') << '\n';
    }

    for (int i = N + 1; i <= N * 2 - 1; ++i)
    {
        cout << string(i - N, ' ') << string(N * 4 - i * 2 - 1, '*') << '\n';
    }
}
