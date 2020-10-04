#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string sentence;
    int count = 1;

    getline(cin, sentence);

    if (sentence.empty())
    {
        cout << 0;

        return 0;
    }

    for (const char& c : sentence)
    {
        if (c == ' ')
        {
            count++;
        }
    }

    if (sentence[0] == ' ')
    {
        count--;
    }

    if (sentence[sentence.length() - 1] == ' ')
    {
        count --;
    }

    cout << count;
}