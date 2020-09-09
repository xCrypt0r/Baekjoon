#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    string s;

    while (true)
    {
        cin >> c;
        cin.ignore();

        if (c == '#')
        {
            break;
        }

        getline(cin, s);

        transform(s.begin(), s.end(), s.begin(), [](auto c) {
            return tolower(c);      
        });

        cout << c << " " << count(s.begin(), s.end(), c) << "\n";
    }
}
