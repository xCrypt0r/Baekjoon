#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int N;

    cin >> N;

    for (int i = 1; i < N * 2; ++i)
    {
        cout << string(abs(N - i), ' ') << string(i <= N ? i : N * 2 - i, '*') << '\n';
    }
}
