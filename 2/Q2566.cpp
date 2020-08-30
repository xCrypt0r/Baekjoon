#include <iostream>

using namespace std;

int main()
{
    const int N = 9, M = 9;
    int num[N][M];
    int max = 0, x = 0, y = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> num[i][j];

            if (num[i][j] > max)
            {
                max = num[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }

    cout << max << "\n" << x << " " << y;
}