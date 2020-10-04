#include <iostream>

using namespace std;

int main()
{
    string word;
    int count[26] = { 0, };

    cin >> word;

    for (const char& c : word)
    {
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        cout << count[i] << " ";
    }
}