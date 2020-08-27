#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string S, buffer;

    cin >> T;
    cin.ignore();

    while (T--)
    {
        getline(cin, S);

        istringstream ss(S);

        while (getline(ss, buffer, ' '))
        {
            reverse(buffer.begin(), buffer.end());

            cout << buffer << " ";
        }

        cout << "\n";
    }
}
