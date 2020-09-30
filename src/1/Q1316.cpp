#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    string word;
    vector<char> appeared;
    int count = 0;
    bool is_group = false;

    cin >> N;

    while (N--)
    {
        appeared.clear();
        is_group = true;

        cin >> word;

        for (int i = 0; i < word.length(); ++i)
        {
            if (find(appeared.begin(), appeared.end(), word[i]) != appeared.end())
            {
                if (word[i] == word[i - 1])
                {
                    appeared.push_back(word[i]);
                }
                else
                {
                    is_group = false;

                    break;
                }
            }
            else
            {
                appeared.push_back(word[i]);
            }
        }

        if (is_group)
        {
            count++;
        }
    }

    cout << count;
}