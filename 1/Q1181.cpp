#include <iostream>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b);

int main()
{
    int N;

    cin >> N;

    string words[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> words[i];
    }

    sort(words, words + N, compare);

    for (int i = 0; i < N; ++i)
    {
        if (words[i] != words[i + 1])
        {
            cout << words[i] << endl;
        }
    }
}

bool compare(const string& a, const string& b)
{
    return a.length() == b.length() ? a < b : a.length() < b.length();
}
