#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;

    cin >> T;

    while (T--)
    {
        cin >> n;

        bool opened[n + 1];

        fill(opened + 1, opened + n + 1, true);

        for (int i = 2; i <= n; ++i)
        {
            for (int j = 1; i * j <= n; ++j)
            {
                opened[i * j] = !opened[i * j];
            }
        }

        cout << count(opened + 1, opened + n + 1, true) << '\n';
    }
}