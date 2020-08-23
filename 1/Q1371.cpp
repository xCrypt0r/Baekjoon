#include <iostream>
#include <algorithm>
#include <locale>

using namespace std;

int main()
{
    string s;
    int count[26] = { 0, };

    while (cin >> s)
    {
        for (const char& c : s)
        {
            if (isalpha(c))
            {
                count[c - 'a']++;
            }
        }
    }

    int max_count =  *max_element(count, count + 26);

    for (int i = 0; i < 26; ++i)
    {
        if (count[i] == max_count)
        {
            cout << (char)(i + 'a');
        }
    }
}
