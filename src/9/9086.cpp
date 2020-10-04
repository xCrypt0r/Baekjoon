#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string word;

    cin >> T;

    while (T--)
    {
        cin >> word;
        cout << word[0] << word[word.length() - 1] << '\n';
    }
}
