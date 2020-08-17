#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    string word;
    vector<string> chunks;
    int pos = 0;

    cin >> word;

    for (int i = 0; i < word.length() / 10 + 1; ++i)
    {
        chunks.push_back(word.substr(pos, 10));
        pos += 10;
    }

    for (const string& chunk : chunks)
    {
        cout << chunk << '\n';
    }
}
