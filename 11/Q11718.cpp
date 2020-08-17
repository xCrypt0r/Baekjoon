#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    while (true)
    {
        getline(cin, s);

        if (s.empty())
        {
            break;
        }

        cout << s << '\n';
    }
}
