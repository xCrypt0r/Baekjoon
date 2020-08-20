#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    int count[26] = { 0, };
    int max = 0;
    int dupe = 0;

    cin >> word;

    transform(word.begin(), word.end(), word.begin(), (int(*)(int))toupper);

    for (const char& c : word)
    {
        count[c - 'A']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (count[i] > max)
        {
            max = count[i];
            dupe = 0;
        }

        if (count[i] == max)
        {
            dupe++;
        }
    }

    if (dupe > 1)
    {
        cout << '?';
    }
    else
    {
        cout << (char)(distance(count, max_element(count , count + 26)) + 'A') << endl;
    }
}