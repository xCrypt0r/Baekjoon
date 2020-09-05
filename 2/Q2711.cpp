#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, pos;
    string sentence;

    cin >> T;

    while (T--)
    {
        cin >> pos >> sentence;

        sentence.erase(pos - 1, 1);

        cout << sentence << "\n";
    }
}
