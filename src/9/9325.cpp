#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, s, n, q, p;
    int cost;

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        cin >> s >> n;

        cost = 0;
        cost += s;

        for (int j = 0; j < n; ++j)
        {
            cin >> q >> p;

            cost += q * p;
        }

        cout << cost << '\n';
    }
}