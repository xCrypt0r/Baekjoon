#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;

    cin >> T;

    while (T--)
    {
        int a, b;
        string s;

        cin >> a >> b >> s;

        for (const auto& x : s)
        {
            cout << char((a * (x - 65) + b) % 26 + 65);
        }

        cout << "\n";
    }

}
