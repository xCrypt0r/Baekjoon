#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string s;

    cin >> T;

    while (T--)
    {
        cin >> s;

        int count = 0;

        for (int i = 0; i < s.length() && count >= 0; ++i)
        {
            s[i] == '(' ? count++ : count--;
        }

        cout << (count == 0 ? "YES" : "NO") << "\n";
    }
}
