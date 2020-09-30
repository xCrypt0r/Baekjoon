#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string word1, word2;

    cin >> T;

    while (T--)
    {
        cin >> word1 >> word2;
        cout << "Distances:";

        for (int i = 0; i < word1.length(); ++i)
        {
            cout << ' ' << (word1[i] <= word2[i] ? word2[i] - word1[i] : word2[i] - word1[i] + 26);
        }

        cout << '\n';
    }
}
