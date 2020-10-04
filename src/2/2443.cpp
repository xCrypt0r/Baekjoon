#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = N; i > 0; --i)
    {
        cout << string(N - i, ' ') << string(i * 2 - 1, '*') << '\n';
    }
}
