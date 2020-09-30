#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    string S;

    cin >> T;

    while (T--)
    {
        bool appeared[26] = { false };
        int sum = 0;

        cin >> S;

        for (const auto& c : S)
        {
            appeared[c - 65] = true;
        }

        for (int i = 0; i < 26; ++i)
        {
            if (!appeared[i])
            {
                sum += i + 65;
            }
        }

        cout << sum << "\n";
    }
}
