#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N * 2 - 1; ++i)
    {
        for (int j = N; j > abs(N - i); --j)
        {
            cout << "*";
        }

        cout << "\n";
    }
}
