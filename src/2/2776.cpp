#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N, M;

    cin >> T;

    while (T--)
    {
        cin >> N;

        int note1[N];

        for (int i = 0; i < N; ++i)
        {
            cin >> note1[i];
        }

        cin >> M;

        int note2[M];

        for (int i = 0; i < M; ++i)
        {
            cin >> note2[i];
        }

        sort(note1, note1 + N);

        for (const auto& n : note2)
        {
            cout << binary_search(note1, note1 + N, n) << "\n";
        }
    }
}
