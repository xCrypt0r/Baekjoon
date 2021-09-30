#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int N;

    cin >> N;

    set<string> words = {};

    for (int i = 0; i < N; i++)
    {
        string word;

        cin >> word;

        sort(word.begin(), word.end());

        words.insert(word);
    }

    cout << words.size() << endl;
}