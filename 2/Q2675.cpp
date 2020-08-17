#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;

    for (; T > 0; --T)
    {
        int R;
        string S;

        cin >> R >> S;

        for (const char& c : S)
        {
            for (int i = 0; i < R; ++i)
            {
                cout << c;
            }
        }

        cout << '\n';
    }
}
