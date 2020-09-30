#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int N = 3, M = 4;
    const string status[5] = { "E", "A", "B", "C", "D" };
    int yut[N][M];
    int cnt = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> yut[i][j];
        }

        cnt = count(yut[i], yut[i] + M, 0);
        
        cout << status[cnt] << '\n';
    }
}
