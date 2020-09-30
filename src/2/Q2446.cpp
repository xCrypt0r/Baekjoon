#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N * 2 - 1; ++i)
    {
        cout << string(i <= N ? i - 1 : N * 2 - i - 1, ' ') << string(abs(N - i) * 2 + 1, '*') << endl;
    }
}
