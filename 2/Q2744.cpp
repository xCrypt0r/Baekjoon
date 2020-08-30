#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word, res;

    cin >> word;

    for (const auto& c : word)
    {
        res += isupper(c) ? tolower(c) : toupper(c);
    }

    cout << res;
}
