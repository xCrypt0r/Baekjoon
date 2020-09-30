#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    for (int i = 0; i < 100 && !cin.eof(); ++i)
    {
        getline(cin, s);

        cout << s << '\n';
    }
}
