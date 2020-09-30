#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;

    cin >> T;

    while (T--)
    {
        int N;

        cin >> N;

        char cards[N];
        vector<char> result;

        for (int i = 0; i < N; ++i)
        {
            cin >> cards[i];
        }

        result.emplace_back(cards[0]);

        for (int i = 1; i < N; ++i)
        {
            if (cards[i] <= result[0])
            {
                result.insert(result.begin(), cards[i]);
            }
            else
            {
                result.emplace_back(cards[i]);
            }
        }

        for (const auto& c : result)
        {
            cout << c;
        }

        cout << "\n";
    }
}
